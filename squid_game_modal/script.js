//Elements

let redBtn = document.querySelector(".sign-red");
let blueBtn = document.querySelector(".sign-blue");
let closeBtn = document.querySelector(".close-modal");
let yesBtn = document.querySelector(".confirm");
let notBtn = document.querySelector(".exit-modal");
let gotItBtn = document.querySelector(".exit-message");
let firstModal = document.querySelector(".hidden-first");
let secondModal = document.querySelector(".hidden-second");

//Functions

function showFirstModal() {
  firstModal.classList.remove("hidden-first");
}

function hideFirstModal() {
  firstModal.classList.add("hidden-first");
}
function showSecondModal() {
  firstModal.classList.add("hidden-first");
  secondModal.classList.remove("hidden-second");
}

function hideSecondModal() {
  secondModal.classList.add("hidden-second");
}

//Advanced functions

//hide the modal if we click around the modal
window.onclick = (event)=>{
    if(event.target == firstModal){
        hideFirstModal()
    } else if(event.target == secondModal){
        hideSecondModal()
    }
}

//hide the modal if we click on escape key
window.onkeydown = (event) =>{
    if(event.keyCode==27){
        hideFirstModal()
        hideSecondModal()
    }
}
//Event Listeners
redBtn.addEventListener("click", showFirstModal);

blueBtn.addEventListener("click", showFirstModal);

yesBtn.addEventListener("click", showSecondModal);

notBtn.addEventListener("click", hideFirstModal);

gotItBtn.addEventListener("click", hideSecondModal);

closeBtn.addEventListener("click", hideFirstModal);
