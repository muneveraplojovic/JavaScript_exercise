const decrease = document.getElementById("decrease")
const increase = document.getElementById("increase")
const reset = document.getElementById("reset")
// const buttons = document.querySelectorAll("#button");
let counter = document.getElementById("counter");

let count = 0;

decrease.addEventListener('click', ()=>{
   count--
   counter.innerHTML = count
})

increase.addEventListener('click', ()=>{
    count++
    counter.innerHTML = count
 })

 reset.addEventListener('click', ()=>{
    count = 0
    counter.innerHTML = count
 })

    
   //  buttons.forEach((b) => {
    //   b.addEventListener("click", (e) => {
    //     let target = e.currentTarget.classList;
    
    //     if (target.innerText == "increase") {
    //       count++;
    //       counter.innerHTML = count;
    //     } else if (target.innerText == "decrease") {
    //       count--;
    //       counter.innerHTML = count;
    //     } else if (target.innerText == "reset") {
    //       count = 0;
    //       counter.innerHTML = count;
    //     }
    //   });
    // });