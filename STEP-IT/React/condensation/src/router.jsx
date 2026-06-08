import { createBrowserRouter } from "react-router"

import MainLayout from "./layouts/MainLayout"
import Home from "./pages/Home"
import Publishers from "./pages/Publishers"
import PublisherDetails from "./pages/PublisherDetails"
import GameDetails from "./pages/GameDetails"
import Favorites from "./pages/Favorites"

export const router = createBrowserRouter([
  {
    Component: MainLayout,
    children: [
      {
        path: "/",
        Component: Home
      },
      {
        path: "/publishers",
        Component: Publishers
      },
      {
        path: "/publisher/:id",
        Component: PublisherDetails
      },
      {
        path: "/game/:id",
        Component: GameDetails
      },
      {
        path: "/favorites",
        Component: Favorites
      }
    ]
  }
])