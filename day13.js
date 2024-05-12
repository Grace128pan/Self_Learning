console.log('Day 13: DOMContentLoaded event');

function mainFunction() {
    console.log('mainFunction and DOM is loaded and parsed, right?');
}

document.addEventListener('DOMContentLoaded', mainFunction);

document.addEventListener('DOMContentLoaded', (event) => {
    console.log('DOM is loaded and parsed');
    console.log(`event type: ${event.type}`);
});

console.log('This is a message from day13.js file');

const inputElement = document.getElementById('input-change');

inputElement.addEventListener('input', (event) => {
    console.log('The value has changed');
    console.log(`event type: ${event.type}`);
    console.log(`event target: ${event.target.value}`);
    console.log(`Input value is: ${inputElement.value}`);
});

function logEvent(event) {
    console.log(`event type: ${event.type}`);
    console.log(`event target: ${event.target.value}`);
}

const inputElement2 = document.getElementById('input-change-2');

inputElement2.addEventListener('input', logEvent);

const outputElement = document.getElementById("input-output-id");

function logSomeEvent(event) {
    console.log(`event type: ${event.type}`);
    console.log(`event target: ${event.target.value}`);
    outputElement.textContent = `Combined value is ${inputElement.value} ${inputElement2.value}`;
}

const numberInputElement1 = document.getElementById("number-1");
const numberInputElement2 = document.getElementById("number-2");
const outputNumberElement = document.getElementById("number-output");

function handleNumberInput(event) {
    const number1 = parseFloat(numberInputElement1.value);
    const number2 = parseFloat(numberInputElement2.value);
    const sum = number1 + number2;
    outputNumberElement.value = sum;
    outputNumberElement.textContent = `Sum: ${sum}`;
    const concatenation = numberInputElement1.value + numberInputElement2.value;
}

numberInputElement1.addEventListener("input", handleNumberInput);
numberInputElement2.addEventListener("input", handleNumberInput);

let counter = 0;
const generateButton = document.getElementById("btn-add-element");
const containerElements = document.getElementsByClassName("element-container");
const containerElement = containerElements[0];

function generateNewElement() {
    console.log("Button clicked!");
    const newElement = document.createElement("p");
    counter++;
    newElement.textContent = `Element No. ${counter}`;
    
    // Add different classes based on odd or even counter value
    if (counter % 2 === 0) {
        newElement.classList.add("new-p-element-even");
    } else {
        newElement.classList.add("new-p-element-odd");
    }

    containerElement.appendChild(newElement);
}

generateButton.addEventListener("click", generateNewElement);
