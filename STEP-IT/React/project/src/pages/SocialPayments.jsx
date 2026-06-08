import React from 'react'
import { useTranslation } from 'react-i18next'

const SocialPayments = () => {
    const { t } = useTranslation()

    const terms = t('socialPayments.terms.items', { returnObjects: true })

    return (
        <section className="max-w-7xl mx-auto px-6 py-10">
            <div className="bg-[#c8aa67] rounded-md min-h-[320px] mb-8 relative overflow-hidden">
                <div className="absolute inset-0 bg-gradient-to-r from-[#b9964f] via-[#c8aa67] to-[#d5bd7e]" />

                <div className="relative z-10 h-full min-h-[320px] flex items-end px-8 lg:px-12 pb-10">
                    <h1 className="text-4xl lg:text-5xl font-black text-white">
                        {t('socialPayments.title')}
                    </h1>
                </div>
            </div>

            <div className="border-t-4 border-[#c8aa67] pt-7">
                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('socialPayments.p1')}
                </p>

                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('socialPayments.p2')}
                </p>

                <p className="text-xl text-slate-900 leading-8 mb-6">
                    {t('socialPayments.p3')}
                </p>

                <p className="text-xl text-slate-900 leading-8 mb-4">
                    {t('socialPayments.terms.title')}
                </p>

                <ul className="list-disc pl-12 text-xl text-slate-900 leading-8 mb-6">
                    {terms.map((item) => (
                        <li key={item}>
                            {item}
                        </li>
                    ))}
                </ul>

                <p className="text-xl text-slate-900 leading-8 font-semibold">
                    {t('socialPayments.phone')}
                </p>
            </div>
        </section>
    )
}

export default SocialPayments