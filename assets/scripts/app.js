const defaultResult = 0;
let currentResult = defaultResult;
let logEntries = [];

function getUserInputNumber() {
  return parseInt(userInput.value);
}

function createAndWriteOutput(operator, resultBeforeCalc, calcNumber) {
  const calcDescription = `${resultBeforeCalc} ${operator} ${calcNumber}`;
  outputResult(currentResult, calcDescription);
}

function writeToLog(opeNum, numPrev, numNex, res) {
  const logEntry = {
    operation: opeNum,
    prevNum: numPrev,
    nextNum: numNex,
    result: res,
  };
  logEntries.push(logEntry);
  console.log(logEntries);
}

function add() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult += enteredNumber;
  createAndWriteOutput("+", initialResult, enteredNumber);
  writeToLog("add", initialResult, enteredNumber, currentResult);
}

function subtract() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult -= enteredNumber;
  createAndWriteOutput("-", initialResult, enteredNumber);
  writeToLog("subtract", initialResult, enteredNumber, currentResult);
}

function multiply() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult *= enteredNumber;
  createAndWriteOutput("*", initialResult, enteredNumber);
  writeToLog("multiply", initialResult, enteredNumber, currentResult);
}

function divide() {
  const enteredNumber = getUserInputNumber();
  const initialResult = currentResult;
  currentResult /= enteredNumber;
  createAndWriteOutput("/", initialResult, enteredNumber);
  writeToLog("divide", initialResult, enteredNumber, currentResult);
}

addBtn.addEventListener("click", add);
subtractBtn.addEventListener("click", subtract);
multiplyBtn.addEventListener("click", multiply);
divideBtn.addEventListener("click", divide);
