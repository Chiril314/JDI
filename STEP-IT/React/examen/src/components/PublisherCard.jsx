import React from "react"
import { Link } from "react-router"

const API_URL = "http://localhost:1337"

export default function PublisherCard({ data }) {
  const logo =
    data.logo?.formats?.medium?.url ||
    data.logo?.formats?.small?.url ||
    data.logo?.formats?.thumbnail?.url ||
    data.logo?.url

  return (
    <Link
      to={`/publisher/${data.documentId}`}
      className="w-[260px] rounded-md border border-gray-700 p-3 bg-gray-950 flex flex-col gap-3"
    >
      {logo && (
        <img
          src={`${API_URL}${logo}`}
          alt={data.name}
          className="w-full aspect-square object-contain rounded-md bg-gray-600 p-4"
        />
      )}

      <h2 className="text-lg font-bold text-center text-gray-100">
        {data.name}
      </h2>
    </Link>
  )
}