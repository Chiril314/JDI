import React, { useState, useEffect } from 'react'
import { useTranslation } from 'react-i18next'
import axios from 'axios'
import Category from '../components/Category'
import Post from '../components/Post'

const Home = () => {
  const { t } = useTranslation()

  const [categories, setCategories] = useState(null)
  const [posts, setPosts] = useState(null)

  useEffect(() => {
    axios.get("http://localhost:1337/api/categories")
      .then((res) => setCategories(res.data.data))
      .catch((err) => console.error(err))

    axios.get("http://localhost:1337/api/posts?populate=thumbnail")
      .then((res) => setPosts(res.data.data))
      .catch((err) => console.error(err))
  }, [])

  return (
    <div>
      <h1>{t("welcome")}</h1>

      <section>
        <h2 className="text-2xl font-bold">Categories</h2>
        <ul>
          {
            categories?.map((category) => (<Category data={category} key={category.documentId} />))
          }
        </ul>
      </section>

      <section>
        <h2 className="text-2xl font-bold">Posts</h2>
        <ul>
          {
            posts?.map((post) => (<Post data={post} key={post.documentId} />))
          }
        </ul>
      </section>
    </div>
  )
}

export default Home