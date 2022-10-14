let mainBox = document.querySelector(".tip_calculator");
let firstBtn = document.querySelector(".tip_btn");
let hiddenBox = document.querySelector(".hidden_box");
let message = document.querySelector(".message");
let secondBtn = document.querySelector(".again_btn");

function calculateTip() {
  mainBox.style.diplay = "none";
  hiddenBox.style.display = "unset";
  let price = document.querySelector(".inputBtn").value;
  if (price <= 0) {
    message.innerHTML = `Please enter number above 0`;
    message.style.color = "red";
  }
  if (price >= 100) {
    message.innerHTML = `tip is ${(price * 2) / 100} $`;
  }
  if (price >= 200) {
    message.innerHTML = `tip is ${(price * 3) / 100}$`;
  }
  if (price >= 300) {
    message.innerHTML = `tip is ${(price * 4) / 100}$`;
  }
  if (price >= 400) {
    message.innerHTML = `tip is ${(price * 5) / 100}$`;
  }
  if (price >= 500) {
    message.innerHTML = `thats too much tip`;
  }
}

function reloadAgain() {
  window.location.reload();
}
firstBtn.addEventListener("click", calculateTip);
secondBtn.addEventListener("click", reloadAgain);
