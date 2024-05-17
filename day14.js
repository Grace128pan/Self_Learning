console.log("Let's add and remove some elements upon user interactions!");

// First we will create functions that add and remove elements
// First function will add an element given a container and also the tag name, also classes, id, and text content
// Finally we will have an optional parameter to add background color, change background color directly

function addElement(container, tagName, classes, id, textContent = "", bgColor = null) {
    console.log(`Calling addElement with tag name: ${tagName} and text content: ${textContent}`);
    const newElement = document.createElement(tagName); 
    newElement.classList.add(...classes);
    newElement.id = id;
    newElement.textContent = textContent; 
    if (bgColor) {
        newElement.style.backgroundColor = bgColor;
    }
    container.appendChild(newElement);
}

// Let's add a listener to the document that will call the addElement function
// Let's get our container where we will add the elements
// Its id is element-container-1
const container = document.querySelector("#element-container-1"); // alternative would be document.getElementById("element-container-1")
// querySelector works similar with CSS selectors, it will return the first element that matches the selector
// # is for id, . is for class
const addButton = document.querySelector("#add-element-button");
// Let's use a global counter
let elementCounter = 0;

addButton.addEventListener("click", function() {
    elementCounter++;
    // Depending on elementCounter being even or odd, we will supply custom class even or odd
    const customClass = elementCounter % 2 === 0 ? "even" : "odd";
    addElement(container, "div", ["boxy", "cool", customClass], `element-${elementCounter}`, "This is the element No. " + elementCounter);
});

