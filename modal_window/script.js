let leftMainBtn = document.querySelector(".btn-main-1st");
let rightMainBtn = document.querySelector(".btn-main-2nd");
let yesBtn = document.querySelector(".btn-modal-1st");
let notBtn = document.querySelector(".not-yet");
let exitBtn = document.querySelector(".exit-btn");
let lastBtn = document.querySelector(".btn-modal-2nd");
let firstModal = document.querySelector(".first-modal");
let secondModal = document.querySelector(".second-modal");

leftMainBtn.addEventListener("click", function(){
    firstModal.classList.remove("first-modal")
})

rightMainBtn.addEventListener("click", function(){
    firstModal.classList.remove("first-modal")
})

yesBtn.addEventListener("click", function(){
    firstModal.classList.add("first-modal")
    secondModal.classList.remove("second-modal")
})

notBtn.addEventListener("click", function(){
    firstModal.classList.add("first-modal")
})

lastBtn.addEventListener("click", function(){
    secondModal.classList.add("second-modal")
})

exitBtn.addEventListener("click", function(){
    firstModal.classList.add("first-modal")
})