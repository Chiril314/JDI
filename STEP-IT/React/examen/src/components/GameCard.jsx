// src/components/GameCard.jsx

import React, { useContext } from 'react'
import { Link } from 'react-router'
import { favoritesCtx } from '../contexts/FavoritesContext'

const API_URL = "http://localhost:1337"

const GameCard = ({ data }) => {
  const { favorites, setFavorites } = useContext(favoritesCtx)

  const existsInFavorites = favorites.some(
    (favorite) => favorite.documentId === data.documentId
  )

  const image =
    data.thumbnail?.formats?.medium?.url ||
    data.thumbnail?.formats?.small?.url ||
    data.thumbnail?.formats?.thumbnail?.url ||
    data.thumbnail?.url ||
    data.cover?.formats?.medium?.url ||
    data.cover?.url

    function toggleFavorite(e) {
    e.preventDefault()
    e.stopPropagation()

    if (existsInFavorites) {
        setFavorites((prev) =>
        prev.filter((favorite) => favorite.documentId !== data.documentId)
        )
    } else {
        setFavorites((prev) => [...prev, data])
    }
    }

    return (
    <div className="relative w-[260px] rounded-md border border-gray-700 flex flex-col p-2">
        <button
        type="button"
        onClick={toggleFavorite}
        aria-label={existsInFavorites ? "Remove from favorites" : "Add to favorites"}
        className="absolute bottom-3 right-3 z-20 text-3xl"
        >
        <span className={existsInFavorites ? "text-red-500" : "text-gray-100"}>
            {existsInFavorites ? "♥︎" : "♡ "}
        </span>
        </button>

        <Link to={`/game/${data.documentId}`} className="flex flex-col gap-2">
        {image && (
            <img
            className="w-full aspect-[2/3] object-cover rounded-md"
            src={`${API_URL}${image}`}
            alt={data.title}
            />
        )}

        <h2 className="text-lg font-bold text-gray-100 pt-4">
            {data.title}
        </h2>

        <p className="text-base font-semibold text-gray-400">${data.price}</p>
        </Link>
    </div>
    )
}

export default GameCard