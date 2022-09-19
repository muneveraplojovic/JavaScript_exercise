const defaultResult = 0;
let currentResult = defaultResult;

function getUserInputNumber() {
  return parseInt(userInput.value);
}

function createAndWriteOutput(operator, resultBeforeCalc, CalcNumber) {
  const calcDescription = `${currentResult} ${operator} ${enteredNumber}`;
  outputResult(currentResult, calcDescription);
}
function add() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult = currentResult + enteredNumber;
  createAndWriteOutput("+", currentResult, enteredNumber);
}

function subtract() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult = currentResult - enteredNumber;
  createAndWriteOutput("-", currentResult, enteredNumber);
}
function multiply() {}
function divide() {}
addBtn.addEventListener("click", add);
