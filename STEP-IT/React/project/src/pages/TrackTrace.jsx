import React from 'react'
import { useTranslation } from 'react-i18next'

const TrackTrace = () => {
    const { t } = useTranslation()

    return (
        <section className="max-w-7xl mx-auto px-6 py-10">
            <h1 className="text-4xl lg:text-5xl font-black text-black mb-10">
                {t('track.title')}
            </h1>

            <div className="space-y-8">
                <div className="bg-white rounded-md shadow-xl overflow-hidden grid lg:grid-cols-[1fr_1fr]">
                    <div className="bg-[#00365a] min-h-[165px] flex items-center justify-center px-8">
                        <h2 className="text-4xl font-black text-white">
                            {t('track.postalDelivery')}
                        </h2>
                    </div>

                    <div className="p-8 lg:p-12 flex items-center">
                        <div className="flex w-full max-w-3xl">
                            <div className="flex-1 border border-slate-200 rounded-l-md px-5 py-4 flex items-center">
                                <input
                                    className="w-full outline-none text-slate-600 font-bold"
                                    placeholder={t('track.placeholder')}
                                />
                            </div>

                            <button className="bg-[#004b7a] text-white font-bold text-xl px-8 rounded-r-md cursor-pointer">
                                {t('track.search')}
                            </button>
                        </div>
                    </div>
                </div>

                <div className="bg-white rounded-md shadow-xl grid lg:grid-cols-[1fr_1fr]">
                    <div className="bg-[#00365a] flex items-center justify-center px-8">
                        <h2 className="text-4xl font-black text-white">
                            {t('track.courierDelivery')}
                        </h2>
                    </div>

                    <div className="p-8 lg:p-12 flex items-center">
                        <div className="flex w-full max-w-3xl">
                            <div className="flex-1 border border-slate-200 rounded-l-md px-5 py-4 flex items-center">
                                <input
                                    className="w-full outline-none text-slate-600 font-bold"
                                    placeholder={t('track.placeholder')}
                                />
                            </div>

                            <button className="bg-[#004b7a] text-white font-bold text-xl px-8 rounded-r-md cursor-pointer">
                                {t('track.search')}
                            </button>
                        </div>
                    </div>
                </div>
            </div>
        </section>
    )
}

export default TrackTrace