let button=document.getElementById("btn")

button.addEventListener("click", ()=>{
    document.getElementById("header").innerHTML= "Ovo je sad novi header"
    console.log("stisnuli ste dugmee");
    alert("radiiiiii")
})

const string = "ovo je string";
let newString = "";

for (let i = 0; i <string.length; i++) {
  if (i === string.length - 1) {
    newString += string[i].toUpperCase();
  } else if (string[i + 1] === " ") {
    newString += string[i].toUpperCase();
  } else {
    newString += string[i];
  }
}

console.log(newString);

let weatherIsSunny = false

weatherIsSunny ? console.log("ponesi naocare") : console.log("sedi kuci hladno je");;

// Zadatak
// Prvi deo. Napraviti pomocni niz koji ce sadrzati elemente od oba niza.
// Drugi deo. Napraviti jos jedan pomocni niz koji ce iz prvog dodatnog niza uzeti parne brojeve.
// Treci deo. U drugom pomocnom nizu umetnuti na prva dva mesta 10 i 20.
//            Funkcija na kraju treba da vrati dva napravljena pomocna niza.

const arr1 = [2, 26, 38, 75, 11, 29];
const arr2 = ["a", "b", "c", "d", "e"];

function concatArrays(a, b) {
  concatedArray = [];
  let conc = a.concat(b)
  concatedArray.push(conc);

  let pomocniArr = [];
  for (let i = 0; i <= a.length; i++) {
    if (i % 2 === 0) {
      pomocniArr.push(i);
    }
  }
  pomocniArr.unshift(10, 20);
  console.log("Prvi array:  ", concatedArray);
  console.log("Drugi array:  ", pomocniArr);
}
console.log(concatArrays(arr1, arr2));

console.log("------------------------------------");

const DATA1 = [2, 26, 38, 75, 11, 29];
const DATA2 = ["a", "b", "c", "d", "e"];

const mutateArrays = (arr1, arr2) => {
  const joker1 = arr1.concat(arr2);
  let joker2 = [];
  for (let i of joker1) {
    if (i % 2 === 0) {
      joker2.push(i);
    }
  }
  joker2.unshift(10, 20);
  return (
    "Prvi pomocni niz je: " + joker1 + "\n" + "Drugi pomocni niz je " + joker2
  );
};

console.log(mutateArrays(DATA1, DATA2));

const DATA8 = ["Bostan", "bostan", 39, "grozdje", 10, "borovnica"];

const toString = DATA8.join("");
console.log(toString);

// Napraviti novi niz koji ce sadrzati samo ocene. Nakon toga,
//  Naci prosek ocena.

const students = [
    { name: "Faris", grade: 8, year: 2 },
    { name: "Isko", grade: 10, year: 4 },
    { name: "Aldin", grade: 8, year: 2 },
    { name: "Amina", grade: 9, year: 4 },
    { name: "Sabina", grade: 9, year: 3 },
    { name: "Denis", grade: 7, year: 4 },
    { name: "Senad", grade: 6, year: 1 },
]

function getAvgGrade(array) {
    const grades = array.map((value) => value.grade);
    let len = grades.length;
    const avg = grades.reduce((total, value) => total + value) / len;
    return +(avg.toFixed(2));
}

// push - dodaje element na kraju niza
// pop - izbacuje zadnji element - brise ga
// unshift - dodaje el na pocetak niza
// shift - brise prvi element
// reverse()-vraca obrnuti redosledd niza
// concat - sluzi za spajanje
// find( )- vraca prvi el iz niza koji zadovoljava uslov
// findIndex()- vraca prvi el koji ima trazeni index
// filter - prvi novi niz na osnovu ispunjenog uslova
// map - pravi novi niz uz dodavanje promena
//  every() metoda. Da li svaki element niza ispunjava odredjeni uslov?!
//  some() metoda. Da li je bar neki element niza ispunio odredjeni uslov?!
//  includes() metoda. Da li dati niz sadrzi odredjeni element?!
//  join() metoda. Uzima sve clanove niza i spaja ih u jedan string.
// console.log(getAvgGrade(students));
// call , bind apply
// Object.freeze() cini objekat immutabile(nepromenljivim)!!!
// Object.seal() cini objekat promenljivim, ali nije dozvoljeno
// dodati niti brisati elemente!!!
// Object.keys() vraca niz kljuceva!!!
// Object.values() vraca niz vrednosti objekta!!!
// Object.entries() vraca niz nizova. Svaki niz je (key,value) par!!!
// Object.is(person1, person2) => Identicko poredjenje nizova.
// [...names] - kopiranje niza i dodavanje novih el oko niza
// // Preko new Set() gubimo duplikate, ali je potrebno opet vratiti u niz.
// const nemaDuplih = new Set(numbers);
// const nemaDuplihArr = [...nemaDuplih];
// console.log(nemaDuplihArr);
// Promise - resolve/reject,   then-uspesno povuceni podaci/catch(err)
// clousure, block local global scope
// fetch-async/await , json

const person1 = {
    name: "John Doe",
    age: 48,
    job: "Employed",
    address: "USA",
    kids: 4
};

const person2 = person1;
Object.freeze(person1);
Object.seal(person1);
Object.keys(person1);
Object.values(person1);
Object.entries(person1)
Object.is(person1, person2);
console.log(Object.is(person1, person2));

const naames = ["faris", "aldin", "senad", "dzenan", "sabina"];
const newNames = ["isko", ...names, "hamza"] // pravi novi niz sa istim elementima.
console.log(names);
console.log(newNames);

const numbers = [1, 2, 3, 1, 5, 2, 7, 10];

// Preko new Set() gubimo duplikate, ali je potrebno opet vratiti u niz.

const nemaDuplih = new Set(numbers);
const nemaDuplihArr = [...nemaDuplih];
console.log(nemaDuplihArr);

// spread moze takodje spajati nizove

const names = ["faris", "aldin", "senad", "dzenan", "sabina"];

const spojeni = [...numbers, ...names];

console.log(spojeni);

1
n= Number(prompt("Unesite neki broj:  "))
let square;

if (isNaN(n)){
    console.log("Molimo vas unesite broj!!!");
} else{
    square=n*n
    console.log(square);
}

2

for (let i = 1; i <=100; i++) {
    if(i%3==0 && i%5==0){
        console.log("fizz-buzz");
    }else if(i%3==0){
        console.log("fizz");
    }else if(i%5==0){
        console.log("buzz");
    }else{
        console.log(i);
    }
}

//3

let recenica;
recenica = "Nakon danasnjeg testa cemo znati ko ce nastaviti sa drugim ciklusom it campa"
novaRecenica=""

for (let i = 0; i <recenica.length; i++) {

    if (recenica[i]="a",recenica[i]= "e",recenica[i]= "i", recenica[i]="o", recenica[i]="u") {
        novaRecenica= recenica + recenica[i].toUpperCase()
    }else{
        novaRecenica+=recenica[i]
    }
}
    console.log(novaRecenica);

// -------------------------------------------------------------------------


import React from 'react'

export default function script() {
  return (
    <div>script</div>
  )
}

