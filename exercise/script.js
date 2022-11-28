// Napraviti arrow funkciju koja na ovnovu unetog argumenta vraca jedno od cetiri stanja:
// Ako je unet pozitivan broj, ispisuje poruku "ARGUMENT JE POZITIVAN BROJ"
// Ako je unet negativan broj, ispisuje poruku "ARGUMENT JE NEGATIVAN BROJ"
// Ako je uneta nula, ispisuje poruku "ARGUMENT JE NULA"
// Ako nije unet broj, ispisuje poruku "ARGUMENT NIJE BROJ"

// const arrowFunction = (arg) => {
//   if (isNaN(arg)) {
//     console.log("nije br");
//   } else if (arg === 0) {
//     console.log("br je nula");
//   } else if (arg > 0) {
//     console.log("pozitivannn");
//   } else {
//     console.log("negativan");
//   }
// };

// console.log(arrowFunction(-1.45));

//////////////////////

// let novaRecenica3 =
//   "Ovo je jedna duza recenica koju treba skratiti. Mozemo primeniti sve tri navedene metode.";
// let duzina2 = novaRecenica3.length;
// console.log(duzina2);

// console.log(novaRecenica3.substr(0,5));

//////////////////

// let recenica = "Nekad zelimo izmeniti sadrzaj nekim drugim.";

// // let novaRecenica=recenica.replace("izmeniti", "ulepsati")

// // console.log(recenica);
// // console.log(novaRecenica);

// let novaRecenica=""
// for (let i = 0; i < recenica.length; i++) {
//     if(i%2==0){
//         novaRecenica.push(recenica[i].toUpperCase)
//     }
// }

// console.log(novsRecenica);

/////////////////////

// Domaci zadatak.
// Napraviti funkciju koja trazi od korisnika da unese neku recenicu, zatim funkcija vraca,
//  datu recenicu u vise oblika (spojenu u jedan string).
// 1. recenicu ispisanu velikim slovima,
// 2. recenicu ispisanu mailim slovima,
// 3. pola recenice ispisano velikim slovima, pola recenice ispisano malim slovima
// 4. Ako se u recenici nadje rec 'skola' neka bude zamenjena recju fakultet,
// 5. Neka bude ispisano prvih 10 karaktera unete recenice,
// 6. Neka bude ispisano poslednjih 10 karaktera unete recenice.

// const unos = prompt("Unesite recenicu: ");
// function obliciRecenice(arg) {
//   const velika = arg.toUpperCase();
//   console.log(velika);
//   const mala = arg.toLowerCase();
//   console.log(mala);
//   if (arg % 2 == 0) {
//     const prvapolovina = arg.toUpperCase();
//     console.log(prvapolovina);
//   } else {
//     const drugapolovina = arg.toLowerCase();
//     console.log(drugapolovina);
//     if (arg.includes("skola")) {
//       const replace = arg.replace("skola", "fakultet");
//       console.log(replace);
//     }
//     console.log(arg.slice(0, 11));
//     console.log(arg.slice(-10, -1));
//   }
//   return unos
// }

// console.log(obliciRecenice(unos));

//////////////////////


// split() metoda ce izvristi konverziju stringa u niz (Array).

// var recenica = "Zelimo izvrsiti konverziju ove recenice u niz.";
// var recenica2 =
//   "Ako bi se desilo da na pocetku casa dodju svi na vreme,\
// to bi bilo cudo, koje do tog trenutka nismo videli, mada je \
// zadovoljavajuce da svakom casu prisustvuje vecina plaznika kursa.";

// // Izostavljajuci argument metode split ce se izvrsiti konverzija datog stringa u niz koji ima jedan element
// var niz1 = recenica2.split("a");
// console.log(niz1);

// // Ako je argument string "," onda cemo dati string pretvoriti u niz koji je podeljen na elemente koje razdvajaju zarezi.
// //var niz2 = recenica2.split(",");
// //console.log(niz2);