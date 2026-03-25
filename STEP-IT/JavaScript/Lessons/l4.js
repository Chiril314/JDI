/*
let currentDate = new Date();
console.log(currentDate);

let birthDate = new Date("2009-09-17");
console.log(birthDate);

// new Date(year, month, day, hour, minutes, seconds, ms);
let lastDayOfSchool = new Date(2026, 4, 31, 10, 30);
console.log(lastDayOfSchool);

// ms - 01.01.1970
let currentDateInMs = Date.now();
console.log(currentDateInMs);

let a = new Date(100000000);
console.log(a);

let b = new Date("02/27/2026");
console.log(b);

let lessonDate = new Date("2026-02-19T18:00:00+00:00");
console.log(lessonDate);

let newYorkFlightDeparture = new Intl.DateTimeFormat("en-US", {
    timeZone: "America/New_York",
    dateStyle: "full",
    timeStyle: "long",
}).format(new Date());
console.log(newYorkFlightDeparture);

function transformDateTime(tz, date){
    return new Intl.DateTimeFormat("en-US", {
        timeZone: tz,
        dateStyle: "short", // full, long, medium, short
        timeStyle: "long", // full, long, medium, short
    }).format(new Date(date));
}
*/



/*
// 8 hours | GMT 0 | 06:00 AM + 8 = 14
let chisinau = transformDateTime("Europe/Chisinau", "2026-02-20T06:00+00:00");
let newYork = transformDateTime("America/New_York", "2026-02-20T14:00+00:00");

console.log(chisinau);
console.log(newYork);

let currentDateTime = new Date().getTime();
let timeUntilFlight = new Date(chisinau).getTime() - currentDateTime;
let hoursUntilFlight = Math.floor(timeUntilFlight / 3600000);
let remainingMs = timeUntilFlight % 3600000;
let minutesUntilFlight = Math.floor(remainingMs / 60000);
if(timeUntilFlight < 0)
    console.log(`Your flight has departured`);
else
    console.log(`Your flight from RMO to JFK is tommorow. Departure time is ${chisinau}, estimated arival time is ${newYork}. You have ${hoursUntilFlight} hours and ${minutesUntilFlight} minutes.`);
*/



function calculateHotelStayPrice(checkIn, checkOut){
    const startDate = new Date(checkIn);
    const endDate = new Date(checkOut);

    startDate.setHours(0, 0, 0, 0);
    endDate.setHours(0, 0, 0, 0);

    let diffInMs = endDate - startDate;
    let diffInDays = diffInMs / 86400000;

    return diffInDays * 125;
}

const stayPrice = calculateHotelStayPrice("2026-02-20T13:00", "2026-02-24T13:00");
console.log(stayPrice);
