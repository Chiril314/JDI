import React, { useState, useEffect } from 'react'
import axios from 'axios'
import { Swiper, SwiperSlide } from 'swiper/react'
import { Navigation } from 'swiper/modules'
import 'swiper/css'
import 'swiper/css/navigation'
import GameCard from '../components/GameCard'

const Home = () => {
  const [games, setGames] = useState(null)

  useEffect(() => {
    axios
      .get("http://localhost:1337/api/games?populate=*")
      .then((res) => setGames(res.data.data))
      .catch((err) => console.error(err))
  }, [])

  return (
    <div className="pb-8">
      <div className="flex justify-center py-8">
        <h className="font-bold text-4xl text-gray-100">Home</h>
      </div>

      <section>
        {games && (
          <div className=" px-10">
            <button className="swiper-button-prev games-swiper-prev !text-gray-500 !scale-75 !left-0"></button>

            <Swiper
              modules={[Navigation]}
              slidesPerView="auto"
              spaceBetween={20}
              navigation={{
                prevEl: ".games-swiper-prev",
                nextEl: ".games-swiper-next",
              }}
              className="!px-1"
            >
              {games.map((game) => (
                <SwiperSlide
                  key={game.documentId}
                  className="!w-[260px]"
                >
                  <GameCard data={game} />
                </SwiperSlide>
              ))}
            </Swiper>

            <button className="swiper-button-next games-swiper-next !text-gray-500 !scale-75 !right-0"></button>
          </div>
        )}
      </section>
    </div>
  )
}

export default Home