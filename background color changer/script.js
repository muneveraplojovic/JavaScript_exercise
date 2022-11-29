const colorButton = document.querySelector(".colorBtn")
const  body = document.querySelector(".body")

//functions
function randomColor() {
  let randomColor = "#" + Math.random().toString(16).substring(2, 8);
  body.style.background = randomColor;
}
randomColor();

//pozivamo funkciju kako bi se menjala i pri svakom refreshovanju stranice
//event listeners

colorButton.addEventListener("click", randomColor);
