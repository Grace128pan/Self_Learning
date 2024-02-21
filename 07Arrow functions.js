/*
1.arrow functions are just the same as a function
2.they are anonymous functions with a special syntax
3.they are often used as callbacks of native JS functions like map, filter or sort
4. to define an arrow function: () => {}
5.in case we want to do an explicit return of the function and we have only one line of code
we can avoid the return statement and omit brackets too
6.we can use an arrow as a callback compared to a normal function
*/
const greet = (name) => {return "Hi " + name + "!";}
console.log(greet("Grace"));


const greeting = (nickName) => {return "Great!" + nickName + "You are so beautiful!";}
console.log(greeting("Zhen"));


const greetings = familyName => "Hello " + familyName + "!";
console.log(greetings("Pan"));


let numbers = [3, 4, 8, 9, 2];
function multiplyByTwo(number){
    return number *2;
}
let multipliedNumbers = numbers.map(multiplyByTwo);
console.log(multipliedNumbers);


let uniqueNumbers = [1, 7, 10];
const multiplyingByThree = uniqueNumber => uniqueNumber *2;
let multiplyingNumbers = uniqueNumbers.map(multiplyingByThree);
console.log(multiplyingNumbers);

myNumbers = [128, 130];
const divideByTwo = myNumber => myNumber /2;
let dividedNumbers = myNumbers.map(divideByTwo);
console.log(dividedNumbers);


const dividingByThree = theNumber => theNumber / 3;
console.log(dividingByThree(21));
console.log(dividingByThree(35));
console.log(dividingByThree(9));

