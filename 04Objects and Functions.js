/*
objects
1.objects are like dictionaries in python or a map in java
we use curly braces to initialize an object
2.Member addressing
we can use period. to add new members in objects
3.Iteration
iterating over objects can also yield members who don't actually
belongs to the object. we must use hasOwnProperty method to check 
that the member in fact belongs to the object.
4.the methods of objects in JaveScript have a fixed order like array
*/

var emptyObject = {};
var personObject = {
    firstName: "Jesse",
    lastName: "Huang"
}
console.log(emptyObject);
console.log(personObject);


personObject.age = 23;
personObject["salary"] = 14000;
console.log(personObject)


for (var member in personObject)
{
    if (personObject.hasOwnProperty(member))
    {
        console.log("the member " + member + "of personObject is " + personObject[member])
    }
}


var person = {
    firstName: "Jack",
    lastName: "Smith",
    age: 19,
    employed: true
}
console.log(person);
console.log(person.firstName);
console.log(person.lastName);
console.log(person.age);
console.log(person.employed);

/*
functions
 1. functions are code blocks that can have arguments and functions have their own scope
 2. define a named function
 3. we can also define an anonymous function
*/

function greeting(name)
{
    return "Hello " + name + "!";
}
console.log(greeting("Eric"));


function greet(country)
{
    return "Hi " + country + " I am coming";
}
console.log(greet("Switzerland"));


var greetings = function(name)
{
    return "Wow " + name + " is so beautiful!";
}
console.log(greetings("Grace"));


function multiplyFive(number)
{
    return number * 5 ;
}
console.log(multiplyFive(20));
