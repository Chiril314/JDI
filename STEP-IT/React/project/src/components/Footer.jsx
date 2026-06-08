import React from 'react'
import { useTranslation } from 'react-i18next'

const Footer = () => {
    const { t } = useTranslation()

    const aboutLinks = t('footer.aboutLinks', { returnObjects: true })
    const publicLinks = t('footer.publicLinks', { returnObjects: true })
    const supportLinks = t('footer.supportLinks', { returnObjects: true })

    return (
        <footer className="bg-[#164f5f] text-[#c8d8df] px-6 lg:px-12 py-14">
            <div className="max-w-7xl mx-auto grid grid-cols-1 md:grid-cols-2 lg:grid-cols-4 gap-14">
                <div>
                    <div className="w-14 h-14 rounded-full border-2 border-[#c8d8df] flex items-center justify-center text-[10px] font-black mb-9">
                        POSTA
                    </div>

                    <h2 className="text-white text-base font-black mb-6">
                        {t('footer.companyName')}
                    </h2>

                    <p className="text-white text-sm font-black mb-3">
                        {t('footer.supportLabel')}
                    </p>

                    <p className="text-sm mb-2">
                        {t('footer.phone')}
                    </p>

                    <p className="text-sm mb-9">
                        {t('footer.email')}
                    </p>

                    <p className="text-sm leading-7 max-w-xs">
                        {t('footer.address')}
                    </p>
                </div>

                <div>
                    <h3 className="text-[#9cb1ba] text-base font-black mb-7">
                        {t('footer.aboutTitle')}
                    </h3>

                    <ul className="space-y-3">
                        {aboutLinks.map((item) => (
                            <li key={item} className="text-sm font-black">
                                {item}
                            </li>
                        ))}
                    </ul>
                </div>

                <div>
                    <h3 className="text-[#9cb1ba] text-base font-black mb-7">
                        {t('footer.publicTitle')}
                    </h3>

                    <ul className="space-y-3">
                        {publicLinks.map((item) => (
                            <li key={item} className="text-sm font-black">
                                {item}
                            </li>
                        ))}
                    </ul>
                </div>

                <div>
                    <h3 className="text-[#9cb1ba] text-base font-black mb-7">
                        {t('footer.supportTitle')}
                    </h3>

                    <ul className="space-y-3">
                        {supportLinks.map((item) => (
                            <li key={item} className="text-sm font-black leading-7">
                                {item}
                            </li>
                        ))}
                    </ul>
                </div>
            </div>
        </footer>
    )
}

export default Footer