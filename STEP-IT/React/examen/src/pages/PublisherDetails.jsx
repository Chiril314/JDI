import React, { useEffect, useState } from "react"
import axios from "axios"
import { useParams } from "react-router"
import ReactMarkdown from "react-markdown"
import GameCard from "../components/GameCard"

const API_URL = "http://localhost:1337"

export default function PublisherDetails() {
  const [publisher, setPublisher] = useState(null)

  const { id } = useParams()

  useEffect(() => {
    axios
      .get(
        `http://localhost:1337/api/publishers?filters[documentId][$eq]=${id}&populate[logo]=true&populate[games][populate][thumbnail]=true&populate[games][populate][cover]=true`
      )
      .then((res) => setPublisher(res.data.data[0]))
      .catch((err) => console.error(err))
  }, [id])

  if (!publisher) {
    return <p>Loading...</p>
  }

  const logo =
    publisher.logo?.formats?.medium?.url ||
    publisher.logo?.formats?.small?.url ||
    publisher.logo?.formats?.thumbnail?.url ||
    publisher.logo?.url

  return (
    <div className="flex flex-col gap-6 py-8 mx-8">
      <section className="flex gap-6 items-start pb-5">
        {logo && (
          <img
            src={`${API_URL}${logo}`}
            alt={publisher.name}
            className="w-[220px] aspect-square object-contain rounded-md bg-gray-600 p-4"
          />
        )}

        <div className="flex flex-col gap-3">
          <h1 className="text-4xl font-bold text-gray-100">{publisher.name}</h1>
          <p className="text-gray-300">{publisher.description}</p>
        </div>
      </section>

      <section>
        <h2 className="text-3xl font-bold mb-4 text-gray-100">
          Games by {publisher.name}
        </h2>

        <div className="flex flex-wrap gap-4">
            {publisher.games.map((game) => (
                <GameCard
                key={game.documentId}
                data={game}
                />
            ))}
        </div>
      </section>
    </div>
  )
}