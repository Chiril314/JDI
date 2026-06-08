import { useEffect, useState } from "react"
import axios from "axios"
import { useParams } from "react-router"
import { useTranslation } from "react-i18next"
import Post from "../components/Post"

export default function Category() {
    const { id } = useParams()

    const [category, setCategory] = useState(null)

    const { i18n } = useTranslation()

    useEffect(() => {
        axios.get(`http://localhost:1337/api/categories?filters[documentId][$eq]=${id}&populate[posts][populate]=thumbnail`)
            .then((res) => setCategory(res.data.data[0]))
            .catch((err) => console.error(err))
    }, [])

    return (<div>
        {
            category && (
                <>
                    <h1>{category[`name_${i18n.language}`]}</h1>
                    <div>
                        <h2>Posts</h2>
                        {
                            category.posts.length > 0 ?
                            (<ul>
                                {
                                    category.posts.map((post) => <Post data={post} />)
                                }
                            </ul>) :
                            (<p>No posts</p>)
                        }
                    </div>
                </>
            )
        }
    </div>)
}