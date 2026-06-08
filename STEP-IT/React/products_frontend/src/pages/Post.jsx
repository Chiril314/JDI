import React, { useEffect, useState } from "react"
import axios from "axios"
import { useParams } from "react-router"
import { useTranslation } from "react-i18next"
import ReactMarkdown from "react-markdown"
import { favoritesCtx } from '../contexts/FavoritesContext'
import { useContext } from "react"

export default function Post() {
    const [post, setPost] = useState(null)

    const { id } = useParams()
    const { i18n } = useTranslation()

    const { favorites, setFavorites } = useContext(favoritesCtx)

    const existsInFavorites = favorites.some((favorite) => favorite.documentId === post?.documentId)

    useEffect(() => {
        axios.get(`http://localhost:1337/api/posts?filters[documentId][$eq]=${id}&populate=thumbnail`)
            .then((res) => setPost(res.data.data[0]))
            .catch((err) => console.error(err))
    }, [])

    const image = post?.thumbnail.formats?.large?.url ||
        post?.thumbnail.formats?.medium?.url ||
        post?.thumbnail.formats?.small?.url ||
        post?.thumbnail.formats?.thumbnail?.url

    return (<div>
        {
            post && (<>
                <img 
                    className="h-[150px] w-[250px] object-fit rounded-md shadow-md"
                    src={`http://localhost:1337${image}`} 
                    alt="Thumbnail Image" />
                <h1>{post[`title_${i18n.language}`]}</h1>
                <ReactMarkdown>{post[`body_${i18n.language}`]}</ReactMarkdown>
                {
                    existsInFavorites ?
                    (
                        <button onClick={(e) => {
                            e.preventDefault()

                            setFavorites((prev) => prev.filter((favorite) => favorite.documentId !== post.documentId))
                        }}>Remove from favorites</button>
                    ) :
                    (
                        <button onClick={(e) => {
                            e.preventDefault()

                            setFavorites((prev) => [...prev, post])
                        }}>Add to favorites</button>
                    )
                }
            </>)
        }
    </div>)
}