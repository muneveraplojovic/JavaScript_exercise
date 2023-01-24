//Elements

let toDoInput = document.getElementById("todo-input");
let toDoAddBtn = document.getElementById("submit");
let toDoCard = document.getElementsByClassName("todo_card");
let toDo = document.getElementById("todo");
let doneBtn = document.getElementsByClassName("done");
let cancelBtn = document.getElementsByClassName("cancel");

//Functions

//Event Listeners

toDoAddBtn.addEventListener("click", (event) => {
  event.preventDefault();
  let inputToDo = toDoInput.value;
  //console.log(inputToDo);
  if (inputToDo == "") {
    alert("prazno je");
  }
  if (toDoCard == null) {
    alert("prazno je");
  } else {
    toDoCard.style.display = "fle";
    toDo.innerHTML = inputToDo;
  }
});
