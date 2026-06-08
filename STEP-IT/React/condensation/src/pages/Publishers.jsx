import React, { useEffect, useState } from "react"
import axios from "axios"
import PublisherCard from "../components/PublisherCard"

export default function Publishers() {
  const [publishers, setPublishers] = useState(null)

  useEffect(() => {
    axios
      .get("http://localhost:1337/api/publishers?populate=logo")
      .then((res) => setPublishers(res.data.data))
      .catch((err) => console.error(err))
  }, [])

  if (!publishers) {
    return <p>Loading...</p>
  }

  return (
    <div>
      <div className="flex justify-center py-8">
        <h className="font-bold text-4xl text-gray-100">Publishers</h>
      </div>

      <div className="flex flex-wrap gap-6.5 px-8">
        {publishers.map((publisher) => (
          <PublisherCard
            key={publisher.documentId}
            data={publisher}
          />
        ))}
      </div>
    </div>
  )
}