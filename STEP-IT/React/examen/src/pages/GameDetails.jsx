import React, { useEffect, useState, useContext } from "react"
import axios from "axios"
import { Link, useParams } from "react-router"
import p from "react-markdown"
import { favoritesCtx } from "../contexts/FavoritesContext"

const API_URL = "http://localhost:1337"

export default function GameDetails() {
  const [game, setGame] = useState(null)

  const { id } = useParams()
  const { favorites, setFavorites } = useContext(favoritesCtx)

  useEffect(() => {
    axios
      .get(
        `http://localhost:1337/api/games?filters[documentId][$eq]=${id}&populate[thumbnail]=true&populate[cover]=true&populate[publisher][populate][logo]=true`
      )
      .then((res) => setGame(res.data.data[0]))
      .catch((err) => console.error(err))
  }, [id])

  if (!game) {
    return <p>Loading...</p>
  }

  const existsInFavorites = favorites.some(
    (favorite) => favorite.documentId === game.documentId
  )

const image =
  game.cover?.formats?.large?.url ||
  game.cover?.formats?.medium?.url ||
  game.cover?.formats?.small?.url ||
  game.cover?.url

  function toggleFavorite() {
    if (existsInFavorites) {
      setFavorites((prev) =>
        prev.filter((favorite) => favorite.documentId !== game.documentId)
      )
    } else {
      setFavorites((prev) => [...prev, game])
    }
  }

  return (
    <div className="flex flex-col gap-6">
      <h1 className="text-4xl font-bold pt-8 pl-12 text-gray-100">{game.title}</h1>

        <div className="flex gap-6 items-start px-4">
        {image && (
            <img
            className="w-[700px] aspect-[2/1] object-cover rounded-md"
            src={`${API_URL}${image}`}
            alt={game.title}
            />
        )}

        <div className="relative w-[700px] aspect-[2/1] rounded-md bg-gray-950 border border-gray-700 p-6 flex flex-col gap-5">
            <div className="text-gray-300 line-clamp-5">
                <p>{game.description}</p>
            </div>

            <div className="absolute bottom-5 left-6 flex flex-col pb-2">
                {game.publisher && (
                    <p className="text-lg">
                    <span className="font-semibold text-gray-100">Publisher: </span>

                    <Link
                        to={`/publisher/${game.publisher.documentId}`}
                        className="text-blue-400 hover:underline font-semibold"
                    >
                        {game.publisher.name}
                    </Link>
                    </p>
                )}

                <p className="text-lg text-gray-300">
                    <span className="font-semibold text-gray-100">Price: </span>
                    {game.price}$
                </p>
            </div>

            <button
            type="button"
            onClick={toggleFavorite}
            aria-label={existsInFavorites ? "Remove from favorites" : "Add to favorites"}
            className="absolute bottom-5 right-5 z-20 text-4xl cursor-pointer"
            >
            <span
                className={
                existsInFavorites
                    ? "text-red-500"
                    : "text-white"
                }
            >
                {existsInFavorites ? "♥" : "♡"}
            </span>
            </button>
        </div>
        </div>
    </div>
  )
}