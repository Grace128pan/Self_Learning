// Define the counter variable and get the counter output element
let counter = 0;
const myCounterElement = document.getElementById("click-counter");

// Function to increase the counter and update the display
function increaseCounter() {
    counter++;
    myCounterElement.textContent = `Counter is at ${counter}`;
    console.log(`Counter is at ${counter}`);
}

// Function to reset the counter to zero
function resetCounter() {
    counter = 0;
    myCounterElement.textContent = `Counter is at ${counter}`;
    console.log(`Counter is reset to ${counter}`);
}

// Function to change the background color of the body to a random color
function changeBackgroundColor() {
    const randomColor = `rgb(${Math.floor(Math.random() * 256)}, ${Math.floor(Math.random() * 256)}, ${Math.floor(Math.random() * 256)})`;
    document.body.style.backgroundColor = randomColor;
    console.log(randomColor);
}

// Get the button elements and add event listeners to them
const myButton = document.getElementById("btn-click");
const myResetButton = document.getElementById("btn-click-reset");

// Add event listeners to the buttons
myButton.addEventListener("click", increaseCounter);
myResetButton.addEventListener("click", resetCounter);

// Add event listener to the body for changing background color on click
document.body.addEventListener("click", changeBackgroundColor);

// Log statements for debugging
console.log("Event listeners added to the buttons and body.");
