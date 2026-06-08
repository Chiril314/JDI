import { useContext } from "react"
import { favoritesCtx } from "../contexts/FavoritesContext"
import Post from "../components/Post"

export default function Favorites() {
    const { favorites } = useContext(favoritesCtx)

    return (<div>
        <h1>Favorites</h1>
        <div>
            {
                favorites.length === 0 ? 
                (<p>No items added to favorites</p>) :
                (<ul>
                    {
                        favorites.map((favorite) => (<Post data={favorite} />))
                    }
                </ul>)
            }
        </div>
    </div>)
}