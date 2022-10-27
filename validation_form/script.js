// Elements
let firstName = document.getElementById('name');
let lastName = document.getElementById('last-name');
let email = document.getElementById('email');
let phone = document.getElementById('phone');
let message = document.getElementById('message');

let errorMain = document.querySelector('.error-main');
let errorName = document.querySelector('.error-name');
let errorLastName = document.querySelector('.error-last-name');
let errorEmail = document.querySelector('.error-email');
let errorPhone = document.querySelector('.error-phone');
let errorMessage = document.querySelector('.error-message');
const btnSubmit = document.getElementById('submit');

let validPhone = /[\D]/;
let validName = /[\d]/;
// Functions

// Event listeners
btnSubmit.addEventListener('click', function (e) {
    e.preventDefault();

    let nameValue = firstName.value;
    let lastNameValue = lastName.value;
    let emailValue = email.value;
    let phoneValue = phone.value;
    let messageValue = message.value;

    if (nameValue === '' || lastNameValue === '' || emailValue === '') {
        errorMain.textContent = 'Please fill required field / s.';
    }
    if (nameValue === '' || nameValue.match(validName)) {
        errorName.textContent = 'Please enter your name.';
    }
    if (lastNameValue === '' || lastNameValue.match(validName)) {
        errorLastName.textContent = 'Please enter your last name.';
    }
    if (emailValue === '' || !emailValue.includes('@') || !emailValue.includes('.')) {
        errorEmail.textContent = 'Please enter your email.';
    }
    if (phoneValue.match(validPhone)) {
        errorPhone.textContent = 'Please enter your phone corectly.';
    }
    if (messageValue === '') {
        errorMessage.textContent = 'Please enter your message.';
    }
});


// import React from 'react'

// function script() {
//   return (
//     <div>script</div>
//   )
// }

// export default 
// script
