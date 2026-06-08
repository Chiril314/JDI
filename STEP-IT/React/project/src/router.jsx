import { createBrowserRouter } from "react-router"
import MainLayout from "./layouts/MainLayout"
import Home from "./pages/Home"
import TrackTrace from "./pages/TrackTrace"
import DirectMailAdvertising from "./pages/DirectMailAdvertising"
import SocialPayments from "./pages/SocialPayments"

export const router = createBrowserRouter([
    {
        path: "/",
        Component: MainLayout,
        children: [
            {
                index: true,
                Component: Home
            },
            {
                path: "track-trace",
                Component: TrackTrace
            },
            {
                path: "direct-mail-advertising",
                Component: DirectMailAdvertising
            },
            {
                path: "social-payments",
                Component: SocialPayments
            }
        ]
    }
])