//elements
let firstMainBtn = document.querySelector(".btn-main-1st");
let secondMainBtn = document.querySelector(".btn-main-2nd");
//first two main buttons
let firstModal = document.querySelector(".first-modal");
let secondModal = document.querySelector(".second-modal");
let exitBtn = document.querySelector(".exit-btn");
let container=document.querySelector(".container")


// Functions
function showFirstModal() {
    mainModal.classList.remove('hidden-first');
};

function showSecondModal() {
    mainModal.classList.add('hidden-first');
    secondModal.classList.remove('hidden-second');
};

function hideFirstModal() {
    mainModal.classList.add('hidden-first');
};

function hideSecondModal() {
    secondModal.classList.add('hidden-second');
};

window.onclick = function (event) {
    if (event.target === mainModal) {
        hideFirstModal();
    } else if (event.target === secondModal) {
        hideSecondModal();
    }
}

window.onkeydown = function (event) {
    if (event.keyCode == 27) {
        hideFirstModal();
        hideSecondModal();
    }
}

// Event listeners
btnRed.addEventListener('click', showFirstModal);

btnBlue.addEventListener('click', showFirstModal);

btnConfirm.addEventListener('click', showSecondModal);

btnClose.addEventListener('click', hideFirstModal);

btnExit.addEventListener('click', hideFirstModal);

btnCloseMessage.addEventListener('click', hideSecondModal);
