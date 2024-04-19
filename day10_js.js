console.log("Day 10: JavaScript Functions");
const el=document.getElementById("output");
// using dom API to get the element
el.textContent = 5 > 3 ? "Yes" : "No";

el.style.borderWidth = "3px";

el.innerHTML ="<h2>Do not do this generally</h2><p>5 > 3: " + (5 > 3) + "</p><br>";

// 4 === 4 is exact match
//document.getElementById returned null
//innerHTML is powerful, but easy to make mistakes, overwritten original contents
//"2" == 2 is true, but "2" === 2 is false
// "2" + 2 is "22" in js is allowed

let element  = document.getElementById("comparisons1");
element.textContet = "4 == 4" + (4 == 4);
element = document.getElementById("comparisons2");
element.textContent = "4 === 4: " + (4 === 4);
//in this case only the second comparisons is displayed

//to show conditional branching, let's change color of output background based on the conditions

let a = 5; //image this value comes from somewhere else
let b = 300;
if (a > b) {
    console.log("a is greater than b");
    el.style.backgroundColor = "lightgreen";
} else {
    console.log("a is not greater than b");
    el.style.backgroundColor = "orange";
}

//let's do a three-way branching
a = 300;
if (a > b) {
    el.style.backgroundColor = "lightgreen";
} else if (a < b) {
    el.style.backgroundColor = "lightblue";
} else {
    el.style.Color = "orange";
}