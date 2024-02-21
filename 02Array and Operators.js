//manipulating arrays
//1.pushing and popping: push and pop will insert and remove
//variables from the end of an array
//2.queues using shifting and unshifting: unshift and shift work
// from the beginning of the array
//3.unshift is to insert a variable at the beginning of an array
//4. splicing removes a certain part from an array to create a new array

var myStack = [];
myStack.push(1);
myStack.push(2);
myStack.push(3);
console.log(myStack);

console.log(myStack.pop());
console.log(myStack);

var myQueue = [];
myQueue.push(8);
myQueue.push(9);
myQueue.push(0);
console.log(myQueue.shift());
console.log(myQueue.shift());
console.log(myQueue.shift());

var myArray = [4, 5, 7];
myArray.unshift(12);
console.log(myArray);

var myNewArray = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
var splice = myNewArray.splice(3, 5);
console.log(splice);
console.log(myNewArray);


var myUniqueArray = [];
myUniqueArray.push(13);
myUniqueArray.push(42);
console.log(myUniqueArray);
console.log(myUniqueArray.shift());

var myBArray = [true, "What is the point of life?"];
console.log(myBArray[0]);
console.log(myBArray[1]);

//operators:
//1. addition operators; addition and concatenation of strings
// addition operators can be used to concatenate strings to strings, strings to numbers, numbers to strings
//2.mathematical operators: - * /
//3.advanced mathematical operators: % remainder of a division operation
//myNUmber = myNUmber/2  myNUmber/=2
//4. list of these operators:
/*
/=   *=  -= += %=
*/
//5. math module contains more advanced functions:
/*
math.abs: absolute value of a number
math.exp: calculates the result of e to the power of a number
math.pow(x,y): the result of x to the power of y
math.floor removes the fraction part from a number
math.random() will give a random number x where 0<=x<=1
*/

var a = 10;
var b = 12;
var c = a + b;
console.log(c);

var Name = "John";
console.log("Hello "+ Name +"!");
console.log("My age is " + 34);
console.log(365 + "is a good number");

console.log(1 + "1");

console.log( 34 - 12);
console.log(34 * 10);
console.log(34 / 2);

console.log(5 % 3);

var firstName = "Grace";
var lastName = "Pan";
var fullName = firstName + lastName;
console.log(fullName);

var myNumber = 128;
var meaningOfLife = myNumber * 2;
console.log(meaningOfLife);

var myFirstName = "John";
var myLastName = "Smith";
var myUniqueNumber = 21;
var myFullName = myFirstName + myLastName;
var meaningOfMyLife = myUniqueNumber * 3;
console.log("My name is " + myFullName);
console.log("The true meaning of my life is " + meaningOfMyLife);






