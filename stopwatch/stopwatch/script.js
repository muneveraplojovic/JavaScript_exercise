const timeBtns = document.getElementById("time");
const startBtn = document.getElementById("startBtn");
const stopBtn = document.getElementById("stopBtn");
const resetBtn = document.getElementById("resetBtn");

let sec = 0;
let interval;

const stopWatch = function () {
  sec++;

  let hours = Math.floor(sec / 3600);
  let minutes = Math.floor((sec - hours * 3600) / 60);
  let seconds = sec % 60;

  timeBtns.innerHTML = `${hours}:${minutes}:${seconds}`;
};

const start = function () {
  interval = setInterval(stopWatch, 1000);
  //interval postavljamo u varijablu da bismo ga mogli zaustaviti
};
const stop = function () {
  clearInterval(interval);
};
const reset = function () {
  stop();
  sec = 0;
  timeBtns.innerHTML = "00:00:00";
};

startBtn.addEventListener("click", start);
stopBtn.addEventListener("click", stop);
resetBtn.addEventListener("click", reset);
