console.log("starting our script");
console.log("ending our script");

console.log(new Date());
let myDate = document.getElementById("creation-date");
myDate.style.backgroundColor ="aqua";

myDate.textContent = new Date();
// use const whenever possible, then change to let if possible
const creatorElement = document.getElementById("creator");
//use camel types, use meaning variable names
creatorElement.style.backgroundColor = "yellow";
creatorElement.textContent = "Created by Sara";
const firstName = "grace";
const lastName ="Pan";
const fullname = firstName + " " + lastName;
creatorElement.textContent = `created by ${fullName}`
// use backticks for string interpolation

//do some math
const currentYear = new Date().getFullYear();
console,log("Current year is: ", currentYear);

const futureYear = currentYear + 100;
console.log("Future year is: ", futureYear);

//"22" + 1 will be "221"  concatenate strings
//we should convert the string to number first
console.log("22" + 1);
console.log(parseInt("22") + 1);
console.log(22+1);

//determine data types
console.log(typeof "22");
