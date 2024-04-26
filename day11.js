console.log("Day 11: While Loop");
let i = 0;
while (i < 5) {
    console.log("While loop iteration", i);
    i++;
}

console.log("After while loop is", i);

let floor = 9;
while (floor >= 0) {
    console.log("Floor", floor);
    floor--;
}

console.log("After while loop is", floor);

let j = 0;
while (j < 10) {
    console.log("While loop iteration", j);
    j += 2;
}

console.log("After while loop is", j);

const start = 200;
const stop = 250;
const step = 10;

let k = start;
while (k <= stop) {
    console.log("While loop iteration", k);
    k += step;
}

console.log("After while loop is", k);

let m = 9000;
const doWhileLoopOutput = document.getElementById("doWhileLoopOutput");
do {
    console.log("Do while loop iteration", m);
    doWhileLoopOutput.innerHTML += `Do while loop iteration ${m}<br>`;
} while(m<5);

console.log("After do while loop is", m);

let n = 9000;
while(true) {
    console.log("while loop iteration", n);
    /*doWhileLoopOutput.innerHTML += `while loop iteration + ${n}"<br>"`;*/
    n++;
    if (n >=5) {
        console.log("I want to break free because n is", n);
    }
    break;
}

console.log("After while loop is", n);

for (let i=100; i <103; i+=1) {
    console.log("For loop iteration", i);
}

console.log("After for loop is", i);

//let's use i again, but we count down by 2;
for (let i=10; i>=0; i-=2) {
    console.log("For loop iteration", i);
}

console.log("After for loop is", i);

//switches are another way to do branching
const Day = new Date().getDay();  //0 is Sunday, 1 is Monday, 2 is Tuesday, etc. this is the way to get the current day in number format
const switchOutput = document.getElementById("switchOutput");
switch(Day) {
    case 0:
        console.log("Today is Sunday");
        switchOutput.innerHTML = "Today is Sunday";
        break;
    case 1:
        console.log("Today is Monday");
        break;
    case 2:
        console.log("Today is Tuesday");
        break;
    case 3:
        console.log("Today is Wednesday");
        break;
    case 4:
        console.log("Today is Thursday");
        break;
    case 5:
        console.log("Today is Friday");
        break;
    case 6:
        console.log("Today is Saturday");
        break;
    default:
        console.log("Today is a mystery day");
}      

//arrays and objects will be covered next lectures