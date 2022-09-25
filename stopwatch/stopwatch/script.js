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

  seconds < 10 ? (seconds = `0${seconds}`) : seconds;
  minutes < 10 ? (minutes = `0${minutes}`) : minutes;
  hours < 10 ? (hours = `0${hours}`) : hours;

  timeBtns.innerHTML = `${hours}:${minutes}:${seconds}`;
};

const start = function () {
  if (interval) {
    return;
  }
  //uz pomoc if statement-a sam fiksala bag
  interval = setInterval(stopWatch, 1000);
  //interval postavljamo u varijablu da bismo ga mogli zaustaviti
};
const stop = function () {
  clearInterval(interval);
  interval = null;
};
const reset = function () {
  stop();
  sec = 0;
  timeBtns.innerHTML = "00:00:00";
};

startBtn.addEventListener("click", start);
stopBtn.addEventListener("click", stop);
resetBtn.addEventListener("click", reset);
