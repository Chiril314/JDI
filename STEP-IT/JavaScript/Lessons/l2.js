function sayHello(userName){
    console.log("Hello", userName + '!');
}

function calculator(a, b, operator){
    switch(operator){
        case "+":
            console.log(a, operator, b, '=', a + b);
            break;
        case "-":
            console.log(a, operator, b, '=', a - b);
            break;
        case "*":
            console.log(a, operator, b, '=', a * b);
            break;
        case "/":
            console.log(a, operator, b, '=', a / b);
            break;
    }
}

function getVehicleTypes(age){
    if(age >= 24)
        console.log("Toate categoriile sunt disponibile.");
    else if(age >= 21)
        console.log("Categoriile posibile: AM, A1, A2, B1, B, C1, C, D1, BE, C1E, CE, D1E");
    else if(age >= 18)
        console.log("Categoriile posibile: AM, A1, A2, B1, B, C1, BE, C1E");
    else if(age >= 16)
        console.log("Categoriile posibile: AM, A1, B1");
    else
        console.log("Nici o categorie posibila.");
}

function creditCalculator(salary, total, term){
    const dobanda = 0.105;
    let dobandaLunara = dobanda / 12;
    let factor = Math.pow(1 + dobandaLunara, term);
    let monthlySum = total * (dobandaLunara * factor) / (factor - 1);
    let salary40 = salary * 0.4;

    if(salary40 >= monthlySum)
        console.log("Creditul posibil sa fie aprobat", monthlySum, "MDL");
    else 
        console.log("Imposibil de aprobat creditul, conform datelor introduse", monthlySum, "MDL");
}

//1)
function checkPassword(password){
    if((password.length >= 8 && password.length <= 16) ||
       (password.includes("A") || password.includes("B") || password.includes("C")) ||
       (password.includes("a") || password.includes("b") || password.includes("c")) ||
       (password.includes("1") || password.includes("2") || password.includes("3")) ||
       (password.includes("*") || password.includes("!") || password.includes("@")) ||
       (!password.includes(" "))){
        
        console.log("Ok")
    }
    else{
        console.log("...")
    }
}

//2)
function logFilter(logLevel, currentLevel){
    if(currentLevel === "INFO")
        console.log("Afisat");
    else if(currentLevel === "WARN"){
        if(logLevel === "WARN" || logLevel === "ERROR")
            console.log("Afisat");
        else
            console.log("Ignorat");
    } else if(currentLevel === "ERROR"){
        if(logLevel === "ERROR")
            console.log("Afisat");
        else
            console.log("Ignorat");
    }
}

//3)
function checkEmail(email){
    let flag1 = false;
    let flag2 = false;
    let ok = false;
    for(let i = 0; i < email.length; i++){
        if(email[i] == '@')
            ok = true;
        else if(email[i] == ' ')
            flag2 = true;
        else if(email[i] == '.' && ok)
            flag1 = true;
    }

    if(flag2 || !flag1){
        console.log("Invalid");
        return;
    }

    console.log("Valid")
}

//4)
function accesCheck(role){
    if(role == "admin")
        console.log("toate");
    else if(role == "manager")
        console.log("citire + editare");
    else
        console.log("doar citire");
}

//5)
function shopDiscount(sum){
    if(sum > 3000) 
        console.log('suma spre achitare este de', sum - sum * 0.2)
    else if(sum > 1000) 
        console.log('suma spre achitare este de', sum - sum * 0.1)
 
}

//6)
function checkServer(ping){
    if(ping >= 300)
        console.log("offline")
    else if(ping >= 100)
        console.log("lent");
    else
        console.log("online");
}

//7)
function commandStatus(status){
    if(status === "new")
        console.log("Comanda ta a fost înregistrată. Începem procesarea în curând.");
    else if(status === "processing")
        console.log("Comanda ta este în procesare. Pregătim produsele pentru expediere.");
    else if(status === "shipped")
        console.log("Comanda ta a fost expediată. Este pe drum către tine.");
    else
        console.log("Comanda ta a fost livrată. Mulțumim!");
}

//8)
function salaryCalculator(salary, performanceScore){
    if(performanceScore > 90)
        console.log("Salariu + Bonus =", salary * 1.2);
    else if(performanceScore > 75)
        console.log("Salariu + Bonus =", salary * 1.1);
    else
        console.log("Salariu =", salary);
}

//9)
function ethernetSpeedCheck(speed){
    if(speed > 100)
        console.log("rapid");
    else if(speed > 20)
        console.log("mediu");
    else 
        console.log("slab");
}

//10)
function notificationSystem(unreadCount){
    if(unreadCount >= 10)
        console.log("Ai 10+ notificari");
    else if(unreadCount > 0)
        console.log("Ai", unreadCount, "notificari");
    else
        console.log("Nimic nou");
}

//11)
function stockCheck(stock){
    if(stock > 5)
        console.log("Disponibil");
    else if(stock > 0)
        console.log("Stoc limitat");
    else 
        console.log("Stoc epuizat");
}

//12)
function gameCalculator(kills, assists){
    let score = 0;
    score += kills * 100;
    score += assists * 50;

    console.log("Scor obtinut:", score);
}

//13)
function 

//sayHello("Zeta");
//calculator(67, 69, "+");
//getVehicleTypes(15);
//creditCalculator(12500, 200000, 60)

//checkEmail("afkjsnf@gmailcom")
//checkServer(301);
//salaryCalculator(100, 70);
//ethernetSpeedCheck(10)
//notificationSystem(10)
//stockCheck(76)
//gameCalculator(2, 5)