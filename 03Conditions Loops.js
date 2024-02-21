//1.conditions: if statement
/*
in the first case, if the users click okay, a greeting will be given
otherwise, the users will be asked to enter his or her name
 */
//it is possible to omit the else keyword if we only
// want to execute a block of code only if a certain expression is true
//2.== is used to evaluate two variables are equal
//===" a strict comparison: the same type and same content"
/*
3. to evaluate if two expressions are true together, use and operator &&
to evaluate at least one is true: use or operator ||
*/
/*
4.not operator: ! 
 */
/*
5.switch statement: used to select between more than 2 different options, and to run the
same code for more than one option
 */
// Using switch is not recommended, because forgetting the break will cause confusing results
function greetUsers(uniqueName)
{
    if (uniqueName == "John Smith")
    {
        console.log("Hello JOhn, how are you?");
    } 
    else {
        console.log("Hi " + uniqueName);
    }
}

greetUsers("John Smith")
greetUsers("Grace Pan")


console.log("1" == 1);
console.log("1"=== 1);


var myNumber = 12;
if (myNumber == 12)
{
    console.log("The number is " + myNumber);
} else {
    console.log("Then the number is not correct");
}
 

var foo = 13;
var bar = 15;
if(foo < bar)
{
    console.log("foo is smaller than bar.");
}


var fool = 3;
var standard = 7;
var moo = 9;
if (fool < standard && moo > standard)
{
    console.log("fool is smaller than standard AND moo is larger than standard");
}

if (fool < standard || moo > standard)
{
    console.log("fool is smaller than standard or moo is larger than standard");
}


var notTrue = false;
if(!notTrue)
{
    console.log("not not true is true!");
}


var rank = "Commander";
switch(rank)
{
    case "private":
    case "Sergeant":
        console.log("You are not authorized.");
        break;
    case "Commander":
        console.log("Hello commander! What can I do for you today?");
        break;
    case "Captain":
        console.log("Hello Captain! I will do anything you wish.");
        break;
    default:
        console.log("I don't know what your rank is.");
        break;
        
}


var checkNumber = 37;
if(checkNumber==42)
{
    console.log("The number is correct.")
} else{
    console.log("The number is incorrect.")
}



function uniqueNumber(theNumber)
{
    if(theNumber == 42)
    {
        console.log("Correct");
    }
    else{
        console.log("incorrect");
    }
}

uniqueNumber(30);
uniqueNumber(42);
uniqueNumber(70);


//1.Loops
/*
for statement: used for iterating over arrays or objects
 3parts there
 1)initialization-initializes the iterator variable i
 2)condition: as long as condition is met, the loop continues to execute
 3)increment: a directive which increments the iterator
 note: we can write a shorter notation: i++

*/
//2. we can iterate over array and print out all of its members
/*
3.while statement: a simpler version of for statement; it checks whether
a statement is true and runs as long as it says true.
 */
//4.break and continue statements
/*
the break statement allows to stop the execution of a loop.
*/
//5. continue: skips the rest of the loop and jumps back to the beginning of the loop
var i;
for(i = 0; i<3; i = i+1)
{
    console.log(i);
}


for (var i = 0; i < 3; i ++)
{
    console.log(i);
}


var myArray = ["A", "B", "C"];
for (var i = 0; i <myArray.length; i++)
{
    console.log("The member of myArray in index " + i + myArray[i]);
}


var i = 99;
while(i > 0)
{
    console.log(i + " bottles of beer on the wall");
    i -= 1;
}


var m = 32;
while(true)
{
    console.log(m + " bottles of wine in the fridge");
    m -= 1;
    if (m == 0)
    {
        break;
    }
}


for (var i = 0; i < 100; i ++)
{
    if( i % 2 == 0)
    {
        continue;
    }
    console.log(i + " is an odd number.");
}


var theArray = [3, 12, 7];
for (var i = 0; i < theArray.length; i++)
{
    console.log("The member of theArray in index " + i + "is" + theArray[i]);
}


var newArray = ["the meaning of life", "Happiness", 128];
for (var i = 0; i < newArray.length; i++)
{
    console.log(newArray[i]);
}
