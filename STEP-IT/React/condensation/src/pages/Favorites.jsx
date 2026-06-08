import { useContext } from "react"
import { favoritesCtx } from "../contexts/FavoritesContext"
import GameCard from "../components/GameCard"

export default function Favorites() {
  const { favorites } = useContext(favoritesCtx)

    return (
        <div>
            <div className="flex justify-center py-8 text-gray-100">
                <h className="font-bold text-4xl">Favorites</h>
            </div>

            <div className="flex flex-wrap gap-5.5 px-8 pb-8">
                {favorites.map((favorite) => (
                    <GameCard data={favorite} key={favorite.documentId} />
                ))}
            </div>
        </div>
    )
}