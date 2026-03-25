//1)
let cos = ["lapte", "paine", "oua"];
cos.push("ciocolata");
console.log(cos);


//2)
let tasks = ["gatit", "vesela", "curatanie", "cumparaturi"];
tasks.pop();
console.log(tasks);


//3)
let participanti = ["Ion", "Mihai", "Vasile"];
participanti.unshift("Cristian");
console.log(participanti);


//4)
let clienti = ["Ion", "Mihai", "Vasile"];
clienti.shift();
console.log(clienti);


//5)
let angajati = ["Ion", "Mihai", "Cristian"];
angajati.forEach(function(nume){
    console.log("Salut, " + nume + "!");
});


//6)
let listaLei = [100, 200, 400];
let listaEuro = listaLei.map(function(pret){
    return pret / 20;
});

console.log(listaEuro);


//7)
let lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let listaPara = lista.filter(function(numar){
    return numar % 2 === 0;
});

console.log(listaPara);


//8)
let incasari = [10, 20, 30, 40, 50, 60, 70];
let total = incasari.reduce(function(suma, valoare){
    return suma + valoare;
});

console.log(total);


//9)
let utilizatori = [{n: "Ion", v: 16},
                {n: "Mihai", v: 21},
                {n: "Cristian", v: 17}];
            
let utilizatoriAdulti = utilizatori.find(function(utilizator){
    return utilizator.v > 18;
});

console.log(utilizatoriAdulti);


//10)
let listaProduse = [{n: "Mouse", p: 73}, 
                    {n: "Tastatura", p: 136}, 
                    {n: "Monitor", p: 743}]

let index = listaProduse.findIndex(function(produs){
    return produs.p > 100;
});

console.log(index);


//11)
let text = "salut, acesta este un mesaj test";
let cuvantInterzis = "salut";

let contineCuvantInterzis = text.includes(cuvantInterzis);
console.log(contineCuvantInterzis);


//12)
let listaID = [1241, 5114, 3414, 5824, 7531];
let IDcautat = 5114;

let contineID = listaID.includes(IDcautat);
console.log(contineID);


//13)
