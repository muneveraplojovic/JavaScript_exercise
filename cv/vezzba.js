//student

class Student {
  constructor(i, p, bi) {
    // this.marka = m;
    // this.oznaka = o;
    // this.godiste = g;

    this.ime = i;
    this.prezime = p;
    this.brojIndeksa = bi;
    this.ocene = [];
  }
  predstaviSe = function () {
    document.write("<br>");
    document.write(
      "Ja sam student " +
        this.ime +
        " " +
        this.prezime +
        "Moj broj indeksa je: " +
        this.brojIndeksa
    );
  };
  prosek = function () {
    let s = 0;
    for (let i = 0; i < this.ocene.lenght; i++) {
      s += this.ocene[i];

      return s / this.ocene.lenght;
    }
  };
}
const ime = prompt("Unesite ime studenta:");
const prezime = prompt("Unesite prezime");
const brojIndeksa = prompt("Unesite broj indeksa");
const strOcene = prompt("Unesite ocene studenta razdvojene zarezom");

let student = new Student(ime, prezime, brojIndeksa);

student.ocene = strOcene.split(",");

student.predstaviSe();
console.log(student.prosek());
//let o = new Student();
//let obj1= new Automobil("Mercedes", "c2020", "2010")
