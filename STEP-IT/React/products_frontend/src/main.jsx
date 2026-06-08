import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import { router } from './router'
import { RouterProvider } from 'react-router'
import "./i18n"
import FavoritesContext from './contexts/FavoritesContext'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <FavoritesContext>
      <RouterProvider router={router} />
    </FavoritesContext>
  </StrictMode>,
)
