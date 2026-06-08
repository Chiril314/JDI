import { useState, useEffect, useRef } from 'react'
import { Link, Routes, Route, NavLink } from 'react-router-dom'
import { FaArrowRight } from 'react-icons/fa'

/*
function Home(){
  return(
    <div className="p-8">
      <div className="max-w-4xl mx-auto space-y-6 text-center">
        <h1 className="text-4xl font-bold">Home</h1>
        <p className="text-slate-600">
          Welcome to the project. This is the home page.
        </p>
      </div>
    </div>
  )
}

function Counter(){
  const [count, setCount] = useState(0)
  return(
    <div className="p-8">
      <div className="max-w-4xl mx-auto space-y-6 text-center">
        <h1 className="text-4xl font-bold">Counter</h1>
        <p className="text-slate-600">
          A simple counter with three buttons. Increase, decrease, or reset the value.
        </p>
        <div className="text-6xl font-semibold">{count}</div>
        <div className="flex flex-wrap justify-center gap-4">
          <button
            onClick={() => setCount(count + 1)}
            className="rounded-lg bg-green-600 text-gray-200 px-5 py-3 hover:bg-gray-200 hover:text-green-600 transition-all duration-300"
          >
            +1
          </button>
          <button
            onClick={() => setCount(count - 1)}
            className="rounded-lg bg-red-600 text-gray-200 px-5 py-3 hover:bg-gray-200 hover:text-red-600 transition-all duration-300"
          >
            -1
          </button>
          <button
            onClick={() => setCount(0)}
            className="rounded-lg bg-slate-600 text-gray-200 px-5 py-3 hover:bg-gray-200 hover:text-slate-600 transition-all duration-300"
          >
            Reset
          </button>
        </div>
      </div>
    </div>
  )
}

function NumberGuessingGame() {
  const [target, setTarget] = useState(Math.floor(Math.random() * 100) + 1)
  const [guess, setGuess] = useState('')
  const [message, setMessage] = useState('Guess a number between 1 and 100.')
  const [attempts, setAttempts] = useState(0)

  const handleGuess = () => {
    const num = parseInt(guess, 10)
    if(isNaN(num) || num < 1 || num > 100){
      setMessage('Please enter a number between 1 and 100.')
      return
    }

    setAttempts(attempts + 1)
    if(num < target){
      setMessage('Too low! Try again.')
    }else if (num > target){
      setMessage('Too high! Try again.')
    }else{
      setMessage(`Correct! You guessed it in ${attempts + 1} attempts.`)
    }

    setGuess('')
  }

  const newGame = () => {
    setTarget(Math.floor(Math.random() * 100) + 1)
    setGuess('')
    setMessage('Guess a number between 1 and 100.')
    setAttempts(0)
  }

  return(
    <div className="p-8">
      <div className="max-w-4xl mx-auto space-y-6 text-center">
        <h1 className="text-4xl font-bold">Number Guessing Game</h1>
        <p className="text-slate-600">
          Guess the number between 1 and 100. Get hints if too high or low.
        </p>
        <div className="flex justify-center gap-4 items-center">
          <input
            type="number"
            value={guess}
            onChange={(e) => setGuess(e.target.value)}
            placeholder="Enter your guess"
            className="flex-1 max-w-xs rounded-lg border border-slate-300 px-4 py-3"
            min="1"
            max="100"
          />
          <button
            onClick={handleGuess}
            className="rounded-lg bg-blue-600 text-gray-200 px-6 py-3 hover:bg-gray-200 hover:text-blue-600 transition-all duration-300"
          >
            Guess
          </button>
          <button
            onClick={newGame}
            className="rounded-lg bg-slate-600 text-gray-200 px-6 py-3 hover:bg-gray-200 hover:text-slate-600 transition-all duration-300"
          >
            New Game
          </button>
        </div>
        <p className="text-lg text-slate-800">{message}</p>
        <p className="text-slate-600">Attempts: {attempts}</p>
      </div>
    </div>
  )
}

function App(){
  return(
    <div className="bg-white text-slate-900 min-h-screen">
      <nav className="flex flex-wrap justify-center gap-4 border-b p-4 bg-slate-100 border-slate-200">
        <Link className="rounded-lg bg-blue-600 text-gray-200 px-4 py-2 hover:bg-gray-200 hover:text-blue-600 transition-all duration-300" to="/">Home</Link>
        <Link className="rounded-lg bg-blue-600 text-gray-200 px-4 py-2 hover:bg-gray-200 hover:text-blue-600 transition-all duration-300" to="/counter">Counter</Link>
        <Link className="rounded-lg bg-blue-600 text-gray-200 px-4 py-2 hover:bg-gray-200 hover:text-blue-600 transition-all duration-300" to="/number-guessing">Number Guessing</Link>
      </nav>

      <Routes>
        <Route path="/" element={<Home/>} />
        <Route path="/counter" element={<Counter/>} />
        <Route path="/number-guessing" element={<NumberGuessingGame/>} />
      </Routes>
    </div>
  )
}

export default App
*/



//  ----------------- Task 1 -----------------
/*
function PrimaryButton({
  text = "Register",
  onClick,
  icon: Icon = FaArrowRight,
  disabled = false,
  loading = false,
}) {
  return (
    <button
      onClick={onClick}
      disabled={disabled || loading}
      className={`flex items-center gap-2 px-6 py-3 rounded-xl border-2 font-semibold bg-blue-500 border-blue-600 text-white transition-all duration-150 ease-in-out ${
        disabled || loading ? "opacity-50 cursor-not-allowed" : "hover:bg-blue-600 hover:border-blue-700 hover:shadow-lg hover:scale-105 active:scale-95"
      }`}
    >
      {text}

      {loading ? (
        <span className="h-5 w-5 animate-spin rounded-full border-2 border-white border-t-transparent" />
      ) : (
        <Icon size={18} />
      )}
    </button>
  )
}

export default function App() {
  const [loadingButtonLoading, setLoadingButtonLoading] = useState(false)

  const handleLoadingButtonClick = () => {
    setLoadingButtonLoading(true)
    setTimeout(() => setLoadingButtonLoading(false), 2000)
  }

  return (
    <div className="min-h-screen bg-white flex flex-col items-center justify-center gap-8 p-8">
      <div className="space-y-4">
        <div>
          <h2 className="text-lg font-semibold mb-2">Normal State</h2>
          <PrimaryButton text="Register" />
        </div>

        <div>
          <h2 className="text-lg font-semibold mb-2">Loading State</h2>
          <PrimaryButton
            text="Register"
            onClick={handleLoadingButtonClick}
            loading={loadingButtonLoading}
          />
        </div>

        <div>
          <h2 className="text-lg font-semibold mb-2">Disabled State</h2>
          <PrimaryButton text="Register" disabled />
        </div>
      </div>
    </div>
  )
}
*/



//  ----------------- Task 2 -----------------
/*
function Navbar() {
  return (
    <nav className="fixed top-0 left-0 w-full bg-blue-600 text-white shadow-md z-50">
      <div className="max-w-6xl mx-auto px-6 py-4 flex justify-between items-center">
        <h1 className="text-xl font-bold">MyApp</h1>

        <div className="flex gap-6">
          <NavLink to="/">Home</NavLink>
          <NavLink to="/about">About</NavLink>
          <NavLink to="/services">Services</NavLink>
          <NavLink to="/contact">Contact</NavLink>
        </div>
      </div>
    </nav>
  )
}

function Home() {
  return <h2 className="text-4xl font-bold">Home Page</h2>
}

function About() {
  return <h2 className="text-4xl font-bold">About Page</h2>
}

function Services() {
  return <h2 className="text-4xl font-bold">Services Page</h2>
}

function Contact() {
  return <h2 className="text-4xl font-bold">Contact Page</h2>
}

export default function App() {
  return (
    <>
      <Navbar />

      <main className="pt-24 px-6 min-h-screen bg-gray-100">
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="/about" element={<About />} />
          <Route path="/services" element={<Services />} />
          <Route path="/contact" element={<Contact />} />
        </Routes>
      </main>
    </>
  )
}
*/




//  ----------------- Task 3 -----------------
/*
export default function App() {
  const [open, setOpen] = useState(false)
  const menuRef = useRef(null)

  useEffect(() => {
    function handleClickOutside(event) {
      if (menuRef.current && !menuRef.current.contains(event.target)) {
        setOpen(false)
      }
    }

    document.addEventListener("mousedown", handleClickOutside)

    return () => {
      document.removeEventListener("mousedown", handleClickOutside)
    }
  }, [])

  return (
    <div className="min-h-screen bg-gray-100 p-10">
      <h1 className="mb-6 text-3xl font-bold">Context Menu</h1>

      <div className="relative inline-block" ref={menuRef}>
        <button
          onClick={() => setOpen(!open)}
          className="rounded-lg bg-blue-500 px-5 py-3 text-white hover:bg-blue-600"
        >
          Open Menu
        </button>

        {open && (
          <div className="absolute left-0 top-full z-50 mt-2 w-48 rounded-lg bg-white shadow-lg border">
            <button className="block w-full px-4 py-2 text-left hover:bg-gray-100">
              Profile
            </button>

            <button className="block w-full px-4 py-2 text-left hover:bg-gray-100">
              Settings
            </button>

            <button className="block w-full px-4 py-2 text-left hover:bg-gray-100">
              Logout
            </button>
          </div>
        )}
      </div>

      <div className="mt-10 rounded-xl bg-blue-300 p-10">
      </div>
    </div>
  )
}
*/





//  ----------------- Task 4 -----------------
/*
export default function App() {
  const [email, setEmail] = useState("")
  const [password, setPassword] = useState("")
  const [confirmPassword, setConfirmPassword] = useState("")

  const emailIsValid = /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email)
  const passwordIsValid = password.length >= 6
  const passwordsMatch = password === confirmPassword && confirmPassword.length > 0

  const formIsValid = emailIsValid && passwordIsValid && passwordsMatch

  function handleSubmit(event) {
    event.preventDefault()

    if (!formIsValid) return

    alert("Registration successful!")
  }

  return (
    <div className="min-h-screen bg-gray-100 flex items-center justify-center px-4">
      <form
        onSubmit={handleSubmit}
        className="w-full max-w-md rounded-2xl bg-white p-8 shadow-lg"
      >
        <h1 className="mb-6 text-3xl font-bold text-gray-800">
          Register
        </h1>

        <div className="mb-4">
          <label className="mb-2 block font-medium text-gray-700">
            Email
          </label>

          <input
            type="email"
            value={email}
            onChange={(event) => setEmail(event.target.value)}
            className="w-full rounded-xl border border-gray-300 px-4 py-3 outline-none transition duration-150 ease-in-out focus:border-blue-500 focus:shadow-md"
            placeholder="Enter your email"
          />

          {email.length > 0 && !emailIsValid && (
            <p className="mt-2 text-sm text-red-500">
              Please enter a valid email.
            </p>
          )}
        </div>

        <div className="mb-4">
          <label className="mb-2 block font-medium text-gray-700">
            Password
          </label>

          <input
            type="password"
            value={password}
            onChange={(event) => setPassword(event.target.value)}
            className="w-full rounded-xl border border-gray-300 px-4 py-3 outline-none transition duration-150 ease-in-out focus:border-blue-500 focus:shadow-md"
            placeholder="Enter your password"
          />

          {password.length > 0 && !passwordIsValid && (
            <p className="mt-2 text-sm text-red-500">
              Password must be at least 6 characters.
            </p>
          )}
        </div>

        <div className="mb-6">
          <label className="mb-2 block font-medium text-gray-700">
            Confirm Password
          </label>

          <input
            type="password"
            value={confirmPassword}
            onChange={(event) => setConfirmPassword(event.target.value)}
            className="w-full rounded-xl border border-gray-300 px-4 py-3 outline-none transition duration-150 ease-in-out focus:border-blue-500 focus:shadow-md"
            placeholder="Confirm your password"
          />

          {confirmPassword.length > 0 && !passwordsMatch && (
            <p className="mt-2 text-sm text-red-500">
              Passwords do not match.
            </p>
          )}
        </div>

        <button
          type="submit"
          disabled={!formIsValid}
          className={`w-full rounded-xl px-5 py-3 font-semibold text-white transition duration-150 ease-in-out ${
            formIsValid
              ? "bg-blue-500 hover:bg-blue-600 active:scale-95"
              : "cursor-not-allowed bg-blue-300 opacity-60"
          }`}
        >
          Register
        </button>
      </form>
    </div>
  )
}
*/






//  ----------------- Task 5 -----------------
/*
const products = [
  { name: "Laptop", category: "Electronics", price: 1200 },
  { name: "Phone", category: "Electronics", price: 800 },
  { name: "Headphones", category: "Accessories", price: 150 },
  { name: "Keyboard", category: "Accessories", price: 100 },
  { name: "Shoes", category: "Fashion", price: 90 },
  { name: "T-Shirt", category: "Fashion", price: 30 },
]

export default function App() {
  const [search, setSearch] = useState("")

  const filteredProducts = products.filter((product) =>
    product.name.toLowerCase().includes(search.toLowerCase())
  )

  return (
    <div className="min-h-screen bg-gray-100 p-8">
      <div className="mx-auto max-w-3xl rounded-2xl bg-white p-6 shadow-lg">
        <h1 className="mb-6 text-3xl font-bold text-gray-800">
          Products
        </h1>

        <input
          type="text"
          value={search}
          onChange={(event) => setSearch(event.target.value)}
          placeholder="Search by product name..."
          className="mb-6 w-full rounded-xl border border-gray-300 px-4 py-3 outline-none transition duration-150 focus:border-blue-500 focus:shadow-md"
        />

        <div className="space-y-4">
          {filteredProducts.length > 0 ? (
            filteredProducts.map((product, index) => (
              <div
                key={index}
                className="rounded-xl border border-gray-200 p-4 shadow-sm"
              >
                <h2 className="text-xl font-semibold text-gray-800">
                  {product.name}
                </h2>

                <p className="text-gray-600">
                  Category: {product.category}
                </p>

                <p className="font-medium text-blue-600">
                  ${product.price}
                </p>
              </div>
            ))
          ) : (
            <p className="text-gray-500">No products found.</p>
          )}
        </div>
      </div>
    </div>
  )
}
*/



//  ----------------- Task 6 -----------------
/*
const cards = [
  {
    title: "Modern Laptop",
    description: "A powerful laptop for work, school, and everyday tasks.",
    image: "https://images.unsplash.com/photo-1496181133206-80ce9b88a853",
  },
  {
    title: "Smartphone",
    description: "A clean and fast smartphone with a beautiful display.",
    image: "https://images.unsplash.com/photo-1511707171634-5f897ff02aa9",
  },
  {
    title: "Headphones",
    description: "Comfortable headphones with clear and balanced sound.",
    image: "https://images.unsplash.com/photo-1505740420928-5e560c06d30e",
  },
  {
    title: "Camera",
    description: "Capture high-quality photos and videos anywhere.",
    image: "https://images.unsplash.com/photo-1516035069371-29a1b244cc32",
  },
]

export default function App() {
  return (
    <div className="min-h-screen bg-gray-100 px-6 py-10">
      <h1 className="mb-8 text-center text-4xl font-bold text-gray-800">
        Product Cards
      </h1>

      <div className="mx-auto grid max-w-6xl grid-cols-1 gap-6 sm:grid-cols-2 lg:grid-cols-4">
        {cards.map((card, index) => (
          <div
            key={index}
            className="overflow-hidden rounded-2xl bg-white shadow-md transition duration-300 hover:shadow-2xl"
          >
            <div className="overflow-hidden">
              <img
                src={card.image}
                alt={card.title}
                className="h-48 w-full object-cover transition duration-300 hover:scale-110"
              />
            </div>

            <div className="p-5">
              <h2 className="mb-2 text-xl font-bold text-gray-800">
                {card.title}
              </h2>
            </div>
          </div>
        ))}
      </div>
    </div>
  )
}
*/





//  ----------------- Task 7 -----------------
/*
export default function App() {
  const [isOpen, setIsOpen] = useState(false)

  return (
    <div className="min-h-screen bg-gray-100">
      <header className="bg-white p-4 shadow-md">
        <button
          onClick={() => setIsOpen(true)}
          className="rounded-lg bg-blue-500 px-4 py-2 text-white hover:bg-blue-600"
        >
          ☰ Menu
        </button>
      </header>

      {isOpen && (
        <div
          onClick={() => setIsOpen(false)}
          className="fixed inset-0 z-40 bg-black/50"
        />
      )}

      <aside
        className={`fixed left-0 top-0 z-50 h-full w-64 bg-white p-6 shadow-xl transition-transform duration-300 ${
          isOpen ? "translate-x-0" : "-translate-x-full"
        }`}
      >
        <h2 className="mb-6 text-2xl font-bold">Sidebar</h2>

        <nav className="flex flex-col gap-4">
          <a href="#" className="text-gray-700 hover:text-blue-500">
            Home
          </a>
          <a href="#" className="text-gray-700 hover:text-blue-500">
            About
          </a>
          <a href="#" className="text-gray-700 hover:text-blue-500">
            Services
          </a>
          <a href="#" className="text-gray-700 hover:text-blue-500">
            Contact
          </a>
        </nav>
      </aside>

      <main className="p-8">
        <h1 className="mb-4 text-4xl font-bold">Sidebar Toggle</h1>
      </main>
    </div>
  )
}
*/