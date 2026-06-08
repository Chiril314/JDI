import React from 'react'
import { useTranslation } from 'react-i18next'
import { NavLink } from 'react-router'

const Home = () => {
    const { t } = useTranslation()

    const cards = [
        {
            path: '/track-trace',
            title: t('home.cards.track.title')
        },
        {
            path: '/direct-mail-advertising',
            title: t('home.cards.direct.title')
        },
        {
            path: '/social-payments',
            title: t('home.cards.social.title')
        }
    ]

    return (
        <section className="max-w-7xl mx-auto px-6 py-10">
            <div className="bg-[#c8aa67] rounded-2xl min-h-[330px] mb-12 relative overflow-hidden">
                <div className="absolute inset-0 bg-gradient-to-r from-[#b9964f] via-[#c8aa67] to-[#d5bd7e]" />

                <div className="relative z-10 h-full min-h-[330px] flex flex-col justify-start px-10 lg:px-16 pt-12 text-white">
                    <h1 className="text-4xl lg:text-6xl font-black mb-7 tracking-[0.12em] uppercase">
                        Curier Rapid
                    </h1>

                    <p className="max-w-3xl text-lg lg:text-xl text-white font-semibold leading-8">
                        livrăm responsabil oriunde în Moldova
                    </p>
                </div>
            </div>

            <div className="grid md:grid-cols-3 gap-7">
                {cards.map((card) => (
                    <NavLink
                        to={card.path}
                        key={card.path}
                        className="h-[190px] bg-[#00365a] rounded-2xl shadow-md relative overflow-hidden transition duration-300 hover:scale-[1.03] hover:shadow-2xl"
                    >
                        <div className="absolute inset-0 bg-gradient-to-br from-[#00365a] via-[#004b7a] to-[#002b49]" />

                        <h2 className="absolute bottom-6 left-6 right-6 text-2xl font-black text-white">
                            {card.title}
                        </h2>
                    </NavLink>
                ))}
            </div>
        </section>
    )
}

export default Home