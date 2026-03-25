const seats = [
    {
        code: "A1",
        price: 100,
        available: true, 
        row: 1
    },
    {
        code: "A2",
        price: 100,
        available: false, 
        row: 1
    },
    {
        code: "A3",
        price: 100,
        available: true, 
        row: 1
    },
    {
        code: "B1",
        price: 125,
        available: true, 
        row: 2
    },
    {
        code: "B2",
        price: 125,
        available: true, 
        row: 2
    },
    {
        code: "B3",
        price: 125,
        available: false, 
        row: 2
    },
    {
        code: "C1",
        price: 150,
        available: true, 
        row: 3
    },
    {
        code: "C2",
        price: 150,
        available: true, 
        row: 3
    },
    {
        code: "C3",
        price: 150,
        available: true, 
        row: 3
    }
]

const rows = [1, 2, 3]
let selectedSeats = []

const seatsContainer = document.querySelector("#seats")
const selectedSeatsContainer = document.querySelector("#selected-seats")
const total = document.querySelector("#total")

rows.forEach((row) => {
    const rowDiv = document.createElement("div")
    const rowSeats = seats.filter(seat => seat.row === row)

    rowSeats.forEach((seat) => {
        const seatButton = document.createElement("button")

        seatButton.textContent = seat.code
        seatButton.disabled = !seat.available

        if(seat.available){
            seatButton.addEventListener("click", () => {
                if(!selectedSeats.find((s) => s.code === seat.code)){
                    selectedSeats.push(seat)
                    seatButton.classList.add("selected")
                } else{
                    selectedSeats = selectedSeats.filter((s) => s.code !== seat.code)
                    seatButton.classList.remove("selected")
                }
                showSelectedSeats()
                showTotal()
            })
        }

        rowDiv.appendChild(seatButton) 
    })

    seatsContainer.appendChild(rowDiv)
})

function showSelectedSeats(){
    selectedSeatsContainer.innerHTML = ""
    selectedSeats.forEach((s) => {
        selectedSeatsContainer.innerHTML += `<div>${s.code} ${s.price} MDL</div>`
    })
}

function showTotal(){
    const sum = selectedSeats.reduce((sum, seat) => sum + seat.price, 0)
    total.textContent = `${sum} MDL`
}