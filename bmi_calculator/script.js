// const secondTask = (arr) => {
//     let duzina = arr.length;
//     for (let i = 0; i <= duzina; i++) {
//       if (i % 2 === 1) {
//         arr[i] = "paran broj";
//       }
//     }
//     return arr;
//   };

//   console.log(secondTask([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]));

// let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14];

// const removeEvenNumber = () => {
//   for (let i = 0; i < array.length; i++) {
//     if (i % 2 == 1) {
//       array[i] = "paran broj";
//     }
//   }
//   return array;
// };

// console.log(removeEvenNumber());


// let paragraf = document.getElementById("some-text")
// let button=document.getElementById("btn")
// let again =document.getElementById("back")

// button.addEventListener("click", ()=>{
//   paragraf.innerHTML="This paragraph is changed !"
//   paragraf.style.color = "red"
// })

// again.addEventListener("click", ()=>{
//   window.location.reload();

// })

// let brojac = document.getElementById("counter")
// let plus=document.getElementById("+")
// let minus=document.getElementById("-")
// let reset=document.getElementById("reset")

// counter = 0;

// plus.addEventListener("click", ()=>{
//   counter++
//   brojac.innerHTML=counter
// })

// minus.addEventListener("click", ()=>{
//   counter--
//   brojac.innerHTML=counter
// })

// reset.addEventListener("click", ()=>{
//   counter=0
//   brojac.innerHTML=counter
// })

// let modalShow=document.getElementById("display_modal")
// let prviDiv = document.querySelector(".first_page")
// let confirmBtn=document.getElementById("confirm")
// let drugiDiv=document.querySelector(".second_page")
// let exitBtnSecond=document.getElementById("exit2")
// let confirmBtnSecond = document.getElementById("confirm2")
// let lastPage= document.querySelector(".last_page")
// let backBtn = document.getElementById("get_back")


// modalShow.addEventListener("click", ()=>{
//   prviDiv.style.display="unset"
//   modalShow.style.display="none"
// })

// confirmBtn.addEventListener("click", ()=>{
//   prviDiv.style.display="none"
//   drugiDiv.style.display="unset"
// })

// exitBtnSecond.addEventListener("click", ()=>{
//   drugiDiv.style.display="none"
//   prviDiv.style.display="unset"
// })

// confirmBtnSecond.addEventListener("click", ()=>{
//   drugiDiv.style.display="none"
//   lastPage.style.display="unset"
// })

// backBtn.addEventListener("click", ()=>{
//   window.location.reload();

// })

// // Elements
// let btnCalculate = document.querySelector('.calculate');
// let btnReset = document.querySelector('.reset');
// let outputMessage = document.querySelector('.result-message');

// // // Functions
// function calculateBMI(event) {
//     let height = document.getElementById('height').value;
//     let weight = document.getElementById('weight').value;
//     event.preventDefault();

//     let bmi = weight / (height / 100 * height / 100);
//     const finalBMI = (bmi.toFixed(2));

//     if (height === '' || weight === '') {
//         outputMessage.innerHTML = 'Enter a valid data.';
//     } else if (finalBMI <= 18.5) {
//         outputMessage.innerHTML = `Your BMI is ${finalBMI}. You are thin.`
//     } else if (finalBMI > 18.5 && finalBMI < 24.9) {
//         outputMessage.innerHTML = `Your BMI is ${finalBMI}. You are healthy.`
//     } else {
//         outputMessage.innerHTML = `Your BMI is ${finalBMI}. You are overweight.`
//     }
// }

// function reloadPage() {
//     window.location.reload();
// }

// // Event listeners
// btnCalculate.addEventListener('click', calculateBMI);

// btnReset.addEventListener('click', reloadPage);

alert("its working")