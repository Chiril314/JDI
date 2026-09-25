import React from 'react'
import { Link } from 'react-router'
import { useTranslation } from 'react-i18next'

const Category = ({ data }) => {
    const { i18n } = useTranslation()

    return (
        <li>
            <Link to={`/category/${data.documentId}`} className="p-2 m-2 border border-gray-400 bg-gray-200 rounded-lg flex">
                <p>{data[`name_${i18n.language}`]}</p>
            </Link>
        </li>
    )
}

export default Category