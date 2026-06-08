import React from 'react'
import { NavLink } from 'react-router'
import { useTranslation } from 'react-i18next'

const Header = () => {
    const { t, i18n } = useTranslation()

  return (
    <header>
        <nav>
            <NavLink
                to="/"
                className={({ isActive }) => `${isActive ? 'text-red-500' : 'text-black'} font-semibold text-lg cursor-pointer`}
            >{ t("home") }</NavLink>
            <NavLink
                to="/about"
                className={({ isActive }) => `${isActive ? 'text-red-500' : 'text-black'} font-semibold text-lg cursor-pointer`}
            >{ t("about") }</NavLink>
            <NavLink
                to="/contacts"
                className={({ isActive }) => `${isActive ? 'text-red-500' : 'text-black'} font-semibold text-lg cursor-pointer`}
            >{ t("contacts") }</NavLink>
            <NavLink
                to="/favorites"
                className={({ isActive }) => `${isActive ? 'text-red-500' : 'text-black'} font-semibold text-lg cursor-pointer`}
            >{ t("favorites") }</NavLink>
        </nav>
        <div>
            <button
                className={`${i18n.language === "en" && 'text-red-500'} bg-gray-200 p-2`}
                onClick={() => i18n.changeLanguage("en")}>En</button>
            <button 
                className={`${i18n.language === "ro" && 'text-red-500'} bg-gray-200 p-2`}
                onClick={() => i18n.changeLanguage("ro")}>Ro</button>
            <button 
                className={`${i18n.language === "ru" && 'text-red-500'} bg-gray-200 p-2`}
                onClick={() => i18n.changeLanguage("ru")}>Ru</button>
        </div>
    </header>
  )
}

export default Header