import { createBrowserRouter } from "react-router";
import MainLayout from "./layouts/MainLayout";
import Home from "./pages/Home";
import About from "./pages/About";
import Contacts from "./pages/Contacts";
import Category from "./pages/Category";
import Post from "./pages/Post";
import Favorites from "./pages/Favorites";

export const router = createBrowserRouter([
    {
        Component: MainLayout,
        children: [
            {
                path: "/",
                Component: Home
            },
            {
                path: "/about",
                Component: About
            },
            {
                path: "/contacts",
                Component: Contacts
            },
            {
                path: "/category/:id",
                Component: Category
            },
            {
                path: "/post/:id",
                Component: Post
            },
            {
                path: "/favorites",
                Component: Favorites
            }
        ]
    }
])