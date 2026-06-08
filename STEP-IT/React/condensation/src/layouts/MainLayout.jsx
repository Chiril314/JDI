import React from 'react'
import { Outlet } from 'react-router'
import Header from '../components/Header'

const MainLayout = () => {
  return (
    <div className="min-h-screen bg-gray-950">
      <Header />
      <main className="min-h-[calc(100vh-80px)]">
        <Outlet />
      </main>
    </div>
  )
}

export default MainLayout