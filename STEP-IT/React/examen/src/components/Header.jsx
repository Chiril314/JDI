import React from 'react'
import { NavLink } from 'react-router'
import { useTranslation } from 'react-i18next'

const Header = () => {
    const { t, i18n } = useTranslation()

  return (
    <header className="bg-gray-900 py-4">
        <nav className="flex justify-center gap-6">
            <NavLink
                to="/"
                className={({ isActive }) => `${isActive ? 'text-gray-100' : 'text-gray-400'} font-semibold text-2xl cursor-pointer hover:text-gray-100`}
            >{ t("home") }</NavLink>
            <NavLink
                to="/publishers"
                className={({ isActive }) => `${isActive ? 'text-gray-100' : 'text-gray-400'} font-semibold text-2xl cursor-pointer hover:text-gray-100`}
            >{ t("publishers") }</NavLink>
            <NavLink
                to="/favorites"
                className={({ isActive }) => `${isActive ? 'text-gray-100' : 'text-gray-400'} font-semibold text-2xl cursor-pointer hover:text-gray-100`}
            >{ t("favorites") }</NavLink>
        </nav>
    </header>
  )
}

export default Header