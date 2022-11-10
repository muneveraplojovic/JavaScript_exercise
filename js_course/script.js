// for(i=10; i>=1;i--){
//     console.log(i);
// }

// let i= 10
// while(i>=1){
// console.log(i);
// i--
// }

// rekurzija - pozivanje funkcije unutar iste
// moze da se postigne efekat petlje

// function ispitivanje(n) {
//   console.log(n);
//   if (n - 1 > 0) {
//     return ispitivanje(n - 1);
//     //ovim smo zamenili for petlje...
//   } else {
//     return;
//   }
// }
// ispitivanje(10);

// callback funkcije - funkcija koja se nadje kao argument neke metode ili funkcije
// (ovo unutra je parametar), argument je kao funkcija

// let talib = "Talib";

// function main(func) {
//   console.log("ovo je kod koji izvrsava unutar main funk");
//   func(talib);
// }

// function callBack(arg1) {
//   console.log(`pozdraaaaaaaavvvv, moje ime je ${arg1}`);
// }

// main(callBack);  ne pozivamo funkciju jer smo je prosledili samo kao argument
// callback funkcijaaaaaaaaa

// napraviti main funk koja ispisuje poruku da se raadi o glavnoj funk,
// ali ispod toga neka izvrsi pozivanje callback funk koja ima zadatak da izracuna aritmeticku sredinu 3 broja
// koji predstavljaju argumente te callback funk

// function main2(func) {
//   console.log("ovo je kod koji izvrsava unutar main funk");
//   func(1,2,3)
// }

// function callBack(arg1,arg2,arg3) {
//     let average = +((arg1+arg2+arg3)/3).toFixed(2)
//   console.log(`pozdraaaaaaaavvvv, art je  ${average}`);
// }

// main2(callBack);

// ---------------------------------------------------------

// Objekti su glavna stvar u js
// key-value

// const car = {
//   name: "fiat",
//   godiste: 2004,
//   boja: "bela",
// };

// console.log(car.name);
// console.log(car["godiste"]);

// obj takodje mogu sadrzati metode 
// metode su sadrzane unutar objekta kao definicija funkcije

// const person = {
//     name: "Amina", 
//     prezime: "N",
//     jmbg: 1312003788917,
//     fullName: function(){
//         return this.name + " " + this.prezime
//     }
// }
// console.log(person.fullName());


// napraviti objekat student koji ce da ima vrednosti po zelji svojstava sledecih: 
// ime, prezime, br indexa, ocene kao niz svih ocene koje student ima u trenutnoj godini, 
// prosek ocena ( funkcija koja na osnovu niza ocena vraca prosek datih ocena) 
