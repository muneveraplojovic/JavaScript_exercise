//elements
let randomBackgorund = document.querySelector(".background");
let colorCode = document.querySelector(".color_code");
let colorGenerator = document.querySelector(".color_generator_btn");

//functions
function randomColor() {
  let randomColor = "#" + Math.random().toString(16).substring(2, 8);
  randomBackgorund.style.background = randomColor;
  colorCode.innerHTML = randomColor;
}
randomColor();

//pozivamo funkciju kako bi se menjala i pri svakom refreshovanju stranice
//event listeners

colorGenerator.addEventListener("click", randomColor);
