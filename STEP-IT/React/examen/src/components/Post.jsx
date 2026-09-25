import React, { useContext } from 'react'
import { Link } from 'react-router'
import { useTranslation } from 'react-i18next'
import { favoritesCtx } from '../contexts/FavoritesContext'

const Post = ({ data }) => {
    const { i18n } = useTranslation()
    const { favorites, setFavorites } = useContext(favoritesCtx)

    // 1. verificam daca postarea deja exista in favorite
    const existsInFavorites = favorites.some((favorite) => favorite.documentId === data.documentId)
    
    const image = data.thumbnail.formats?.large?.url ||
        data.thumbnail.formats?.medium?.url ||
        data.thumbnail.formats?.small?.url ||
        data.thumbnail.formats?.thumbnail?.url

    const date = new Date(data.createdAt)
    const formattedDate = `${date.getDate()}.${date.getMonth().toString().padStart(2, "0")}.${date.getFullYear()} ${date.getHours()}:${date.getMinutes()}`

    return (
        <li>
            <Link 
                className="p-2 m-2 rounded-md flex flex-col gap-2 border border-gray-200" 
                to={`/post/${data.documentId}`}>
                <img 
                    className="h-[150px] w-[250px] object-fit rounded-md shadow-md"
                    src={`http://localhost:1337${image}`} 
                    alt="Thumbnail Image" />
                <h2 className="text-xl font-bold">{data[`title_${i18n.language}`]}</h2>
                <p className="text-gray-600 text-sm">{formattedDate}</p>
                {
                    existsInFavorites ?
                    (
                        <button onClick={(e) => {
                            e.preventDefault()

                            setFavorites((prev) => prev.filter((favorite) => favorite.documentId !== data.documentId))
                        }}>Remove from favorites</button>
                    ) :
                    (
                        <button onClick={(e) => {
                            e.preventDefault()

                            setFavorites((prev) => [...prev, data])
                        }}>Add to favorites</button>
                    )
                }
            </Link>
        </li>
    )
}

export default Post