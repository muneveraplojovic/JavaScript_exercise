const defaultResult = 0;
let currentResult = defaultResult;

function getUserInputNumber() {
  return parseInt(userInput.value);
}

function createAndWriteOutput(operator, resultBeforeCalc, calcNumber) {
  const calcDescription = `${currentResult} ${operator} ${enteredNumber}`;
  outputResult(currentResult, calcDescription);
}

function add() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult += enteredNumber;
  createAndWriteOutput("+", currentResult, enteredNumber);
}

function subtract() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult -= enteredNumber;
  createAndWriteOutput("-", currentResult, enteredNumber);
}

function multiply() {
  const initialResult = currentResult;
  currentResult *= enteredNumber;
  createAndWriteOutput("*", currentResult, enteredNumber);
}

function divide() {
  const initialResult = currentResult;
  currentResult /= enteredNumber;
  createAndWriteOutput("/", currentResult, enteredNumber);
}

addBtn.addEventListener("click", add);
subtractBtn.addEventListener("click", subtract);
multiplyBtn.addEventListener("click", multiply);
divideBtn.addEventListener("click", divide);
