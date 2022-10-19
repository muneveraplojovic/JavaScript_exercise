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


let paragraf = document.getElementById("some-text")
let button=document.getElementById("btn")
let again =document.getElementById("back")

button.addEventListener("click", ()=>{
  paragraf.innerHTML="This paragraph is changed !"
})

again.addEventListener("click", ()=>{
  window.location.reload();

})