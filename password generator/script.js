let passGenerator = document.getElementById("password");
let generatorBtn = document.getElementById("generateBtn");
let copyBtn = document.getElementById("copyBtn");

function generatePassword() {
  const charts =
    "0123456789abvgdezijklmnoprstcufhABVGDEZIJKLMNOPRSTCUFH{}[]!@#$^&*()_+=-/*-+%";
  let passwordLenght = 15;
  let password = "";

  for (i = 0; i <= passwordLenght; i++) {
    let randomNumber = Math.floor(Math.random() * charts.length);
    password += charts.substring(randomNumber, randomNumber + 1);
    passGenerator.value = password;
  }
}
generatePassword();

function copyPassword() {
  let copyPassword = document.getElementById("password");
  copyPassword.select();
  copyPassword.setSelectionRange(0, 999);
  navigator.clipboard.writeText(copyPassword.value);
}
generatorBtn.addEventListener("click", generatePassword);

copyBtn.addEventListener("click", copyPassword);
