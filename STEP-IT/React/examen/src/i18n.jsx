import i18n from "i18next";
import { initReactI18next } from "react-i18next";
import enTranslations from "./locales/en.json"
import roTranslations from "./locales/ro.json"
import ruTranslations from "./locales/ru.json"

i18n
    .use(initReactI18next)
    .init({
    lng: "en",
    debug: true,
    resources: {
        en: {
            translation: enTranslations
        },
        ro: {
            translation: roTranslations
        },
        ru: {
            translation: ruTranslations
        }
    }
})