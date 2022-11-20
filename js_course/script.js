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

// niz = [10, 9, 8, 7, 10, 9, 8];
// let zbir = 0;

// for (var i in niz) {
//   zbir += niz[i];
//   duzinaNiza = niz.length;
//   prosek= zbir/duzinaNiza
// }
// console.log(prosek);
// keyword referenca ukazuje na neki objekat
// ne menja svoju vrednost, nije promenljiva

// const student = {
//   ime: "Munevera",
//   prezime: "Plojovic",
//   brojIndexa: 036003,
//   ocene: [10, 9, 8, 10, 8, 9, 7, 8],
//   //build in metoda - funkcija
//   prosekOcena: function () {
//     let zbirOcena = 0;
//     duzinaNiza = this.ocene.length;
//     for (let  i of this.ocene) {
//       zbirOcena += i;
//     }
//     prosek = +(zbirOcena / duzinaNiza).toFixed(2);
//     console.log("Prosek ocena je: ", prosek);
//   },
// };

// console.log(student.prosekOcena());

// ------------------------------------------------------------------------------

// const student = {
//   ime: "Munevera",
//   prezime: "Plojovic",
//   brojIndexa: 036003,
//   ocene: [10, 9, 8, 10, 8, 9, 7, 8],
//   prosekOcena: function () {
//     const brojOcena = this.ocene.length;
//     const suma = this.ocene.reduce(
//       (prevValue, curValue) => prevValue + curValue
//     );
//     const  prosek = suma/brojOcena
//       return `Prosek trenutnih ocena od ${this.ime} je ${prosek}`
//   },
// };

// console.log(student.prosekOcena());

// //rate ration
// ------------------------------------------------------------------------------

// kod const i  let ne vazi hoisitng jedino kod var odnosno kod func definisane
// aplication programming interface - API
// JSON- JavaScript Object Notation
// podaci koje dobijamo sa servera - json
// najcesce se koristi kada se salju podaci sa servera do web stranice
// sintaksa veoma slicna objektima u js-u. Objekat u Js:

// const student = {
//     ime: "Munevera",
//     prezime: "Plojovic",
//     brojIndexa: 036003,
// }
// JSON sintaksa:

// const student2 = {
//   "ime": "Munevera",
//   "prezime": "Plojovic",
//   "brojIndexa": 036003,
// }

// kako menjamo objekte
//
// const person={
// firstName: "Ahmed",
// lastName: "Krkmisevic",
// jmbg: 1312003788917
// }
//
//objekti su promenljivi (mutable)
// const x = person
// console.log(person);
// x.firstName = "Muhamed"
// console.log(x);
// console.log(person);
//
// //menja se i kod x i kod person
// bilo koja promena na x objekat ce takodje promeniti i person objekat
// ovo vazi za neprimitivne tipove podataka tj novoj promenljivoj x dodeljujemo referencu na objekat person
// a ne vrednost
// identicko izjednacavanje

// kako brisemo
// brisanje svojstva objekta se vrsi uz pomoc delete keyword-a:
// 1. delete person["jmbg"] - slabo se koristi
// 2. delete person.jmbg

// splice - odakle brise, dokle brise
// delete - ostavlja rupe i undefind kod nizova - brise i key i value
// Vrednost u objektu moze biti neki drugi objekat, niz, metoda (funkcija)...num str bool

// const osoba={
//   firstName: "Ahmed",
//   lastName: "Krkmisevic",
//   jmbg: 1312003788917
// }

// delete osoba.jmbg
// console.log(osoba);

// // JSON.stringify() metoda nam sluzi za prevodjenje objekata u  json a nakon toga json formata u string.

// const stringObjekta = JSON.stringify(osoba)

// console.log(stringObjekta);
// console.log(typeof JSON.parse(stringObjekta))

// parse obrnuta procedura od jsona tj od stringa vraca objekat
// json.parse - vraca nam objekat iz pos;atog argumenta - ako moze naravno

// Domaci zadatak :
// unutar postojeceg obj dodati nova svojstva:
// trenutna brzina : 0
// maksimalna brzina: 260
// povecanje brzine: (metoda koja uzima jedan argument (brzina vrednost za koliko km se povecala smanjila))
// smanjenje brzine: (metoda koja uzima jedna vrednost )
// zavisi koliko se poveca ili smanji prema tome stavljamo funkciju

// Domaci zadatak:
// Unutar postojeceg objekta dodati nova svojstva:
// 1. trenutnaBrzina: 0,
// 2. maksimalnaBrzina: 260,
// 3. povecanjeBrzine: (metoda koja uzima jedan argument),
// 4. smanjenjeBrzine: (metoda koja uzima jedan argument),

// const myCar = {
//   id: 1,
//   marka: "Audi",
//   model: "a4",
//   boja: "Crvena",
//   pogon: "prednji",
//   menjac: "automatski",
//   kontakt: [0622222, 02033322],
//   servis: {
//     datum: "04,maj",
//     km: 23000,
//     serviser: "Pasovic",
//   },
//   udaran: true,
//   maxBrzina: 260,
//   trBrzina: 200,

//   drive: function (brzina) {
//     if (this.trBrzina + brzina > this.maxBrzina) {
//       return "Ne moze, kupi bolji auto :((";
//     } else {
//       return `Trenutna brzinina iznosi: ${this.trBrzina+=80}`;
//     }
//   },

//   brake: function (brzina) {
//     return (`${this.trBrzina -= brzina} koooociii`);
//   },

//   stop: function () {
//     return `${(this.trBrzina = 0)} trenutna brzina`;
//   },
// };

// console.log(myCar.drive(80));

//////////////////////////////////////////

// import React from 'react'
// import { connect } from 'react-redux'

// export const script = (props) => {
//   return (
//     <div>script</div>
//   )
// }

// const mapStateToProps = (state) => ({})

// const mapDispatchToProps = {}

// export default connect(mapStateToProps, mapDispatchToProps)(script)