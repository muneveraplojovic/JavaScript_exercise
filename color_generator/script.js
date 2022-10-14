//elements
let randomBackgorund = document.querySelector(".background");
let colorCode = document.querySelector(".color_code");
let colorGenerator = document.querySelector(".color_generator_btn");

//functions
function randomColor(){
    let randomColor = "#"+ Math.random().toString(16).substring(2,8)
    randomBackgorund.style.background=randomColor
    colorCode.innerHTML=randomColor
}
randomColor()
//event listeners

colorGenerator.addEventListener("click", randomColor)
