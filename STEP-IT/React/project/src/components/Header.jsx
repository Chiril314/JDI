import React from 'react'
import { NavLink } from 'react-router'
import { useTranslation } from 'react-i18next'

const Header = () => {
    const { t, i18n } = useTranslation()

    const navLinks = [
        { path: '/', label: 'nav.home' },
        { path: '/track-trace', label: 'nav.trackTrace' },
        { path: '/direct-mail-advertising', label: 'nav.directMail' },
        { path: '/social-payments', label: 'nav.socialPayments' },
    ]

    return (
        <header className="bg-white shadow-sm">
            <div className="bg-white px-6 lg:px-12 py-5">
                <div className="max-w-7xl mx-auto flex flex-col lg:flex-row justify-between gap-6 lg:items-center">
                    <NavLink to="/" className="flex items-center gap-4">
                        <div className="w-16 h-16 rounded-md bg-[#005AA9] text-yellow-300 flex items-center justify-center font-black text-xl">
                            PM
                        </div>

                        <div>
                            <strong className="block text-2xl text-[#005AA9]">
                                {t('header.logoTitle')}
                            </strong>
                        </div>
                    </NavLink>

                    <div className="flex flex-wrap items-center gap-8">
                        <div className="flex items-center gap-3">
                            <span className="text-sm text-slate-500">
                                {t('header.contact')}
                            </span>
                            <strong className="text-xl text-[#005AA9]">
                                1310
                            </strong>
                        </div>

                        <button className="text-center cursor-pointer">
                            <div className="text-2xl mb-1">🔍</div>
                            <div className="text-sm font-semibold text-slate-700">
                                {t('header.search')}
                            </div>
                        </button>

                        <button className="text-center cursor-pointer">
                            <div className="text-2xl mb-1">👤</div>
                            <div className="text-sm font-semibold text-slate-700">
                                {t('header.privateOffice')}
                            </div>
                        </button>
                    </div>
                </div>
            </div>

            <div className="bg-[#00365a] px-6 lg:px-12">
                <div className="max-w-7xl mx-auto flex flex-col md:flex-row justify-between gap-4 md:items-center">
                    <nav className="flex flex-wrap gap-0">
                        {navLinks.map((link) => (
                            <NavLink
                                key={link.path}
                                to={link.path}
                                className={({ isActive }) =>
                                    `px-5 py-4 font-bold transition border-l border-white/10 ${
                                        isActive
                                            ? 'bg-[#004b7a] text-white'
                                            : 'text-white hover:bg-[#004b7a]'
                                    }`
                                }
                            >
                                {t(link.label)}
                            </NavLink>
                        ))}
                    </nav>

                    <div className="flex items-center gap-2 my-3">
                        <span className="text-white font-semibold">
                            {t('header.language')}:
                        </span>

                        <select
                            value={i18n.language}
                            onChange={(e) => i18n.changeLanguage(e.target.value)}
                            className="bg-[#00365a] text-white font-bold outline-none cursor-pointer"
                        >
                            <option value="en">EN</option>
                            <option value="ro">RO</option>
                            <option value="ru">RU</option>
                        </select>
                    </div>
                </div>
            </div>
        </header>
    )
}

export default Header