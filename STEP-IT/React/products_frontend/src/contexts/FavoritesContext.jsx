import { createContext, useState, useEffect } from "react";

// 1. p/u a utiliza contextul avem nevoie de o var = createContext()
export const favoritesCtx = createContext()

export default function FavoritesContext({ children }) {
    // 2. definim var contextului
    const [favorites, setFavorites] = useState(JSON.parse(localStorage.getItem("favorites")) || [])

    useEffect(() => {
        localStorage.setItem("favorites", JSON.stringify(favorites))
    }, [favorites])

    // 3. .Provider value={{ var1, var2, var3 }}
    return (<favoritesCtx.Provider value={{ favorites, setFavorites }}>
        { children }
    </favoritesCtx.Provider>)
}