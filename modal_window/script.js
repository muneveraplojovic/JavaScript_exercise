let firstMainBtn = document.querySelector(".btn-main-1st");
let firstModal = document.querySelector(".first-modal");
let secondMainBtn = document.querySelector(".btn-main-2nd");
let secondModal = document.querySelector(".second-modal");
let exitBtn = document.querySelector(".exit-btn");
let container=document.querySelector(".container")

function appearFirstModal (){
    document.querySelector(".container").style.display="none"
}

firstMainBtn.addEventListener("click", appearFirstModal)



