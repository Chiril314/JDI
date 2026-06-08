import React from 'react'
import { useTranslation } from 'react-i18next'

const DirectMailAdvertising = () => {
    const { t } = useTranslation()

    const audience = t('directMail.audience.items', { returnObjects: true })
    const benefits = t('directMail.benefits.items', { returnObjects: true })

    return (
        <section className="max-w-7xl mx-auto px-6 py-10">
            <div className="bg-[#1689a4] rounded-md min-h-[320px] mb-8 relative overflow-hidden">
                <div className="absolute inset-0 bg-gradient-to-r from-[#1689a4] via-[#1ca0bd] to-[#1689a4]" />

                <div className="relative z-10 h-full min-h-[320px] flex items-end px-8 lg:px-12 pb-10">
                    <h1 className="text-4xl lg:text-5xl font-black text-white">
                        {t('directMail.title')}
                    </h1>
                </div>
            </div>

            <div className="border-t-4 border-[#1689a4] pt-7 mb-10">
                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('directMail.p1')}
                </p>

                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('directMail.p2')}
                </p>

                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('directMail.p3')}
                </p>

                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('directMail.p4')}
                </p>

                <button className="text-xl underline underline-offset-2 text-slate-900 font-semibold cursor-pointer">
                    {t('directMail.ratesButton')}
                </button>
            </div>

            <div className="grid lg:grid-cols-2 gap-8">
                <div className="bg-white rounded-md shadow-lg p-10">
                    <h2 className="text-2xl font-black text-slate-900 uppercase mb-10">
                        {t('directMail.audience.title')}
                    </h2>

                    <ul className="space-y-6">
                        {audience.map((item) => (
                            <li key={item} className="flex items-center gap-4 text-2xl text-slate-900">
                                <span className="text-[#0ea5b7] font-black">✓</span>
                                <span>{item}</span>
                            </li>
                        ))}
                    </ul>
                </div>

                <div className="bg-white rounded-md shadow-lg p-10">
                    <h2 className="text-2xl font-black text-slate-900 uppercase mb-10">
                        {t('directMail.benefits.title')}
                    </h2>

                    <ul className="space-y-6">
                        {benefits.map((item) => (
                            <li key={item} className="flex items-center gap-4 text-2xl text-slate-900">
                                <span className="text-[#0ea5b7] font-black">✓</span>
                                <span>{item}</span>
                            </li>
                        ))}
                    </ul>
                </div>
            </div>
        </section>
    )
}

export default DirectMailAdvertising