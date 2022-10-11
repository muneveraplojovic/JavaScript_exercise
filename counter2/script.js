
//elements
let displayNumber = document.querySelector(".display_number");
let increase = document.querySelector(".increase");
let decrease = document.querySelector(".decrease");
let reset = document.querySelector(".reset");

let count = 0;

//event listeners and arrow functions - easy way
increase.addEventListener("click", () => {
  count++;
  displayNumber.innerHTML = count;
});

decrease.addEventListener("click", () => {
  count--;
  displayNumber.innerHTML = count;
});

reset.addEventListener("click", () => {
  count = 0;
  displayNumber.innerHTML = count;
});
