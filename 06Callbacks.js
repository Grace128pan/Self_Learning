/*
1.callbacks
callbacks are functions that as passed as arguments to other functions
it enables the function that receives the callback to call our code when it finishes a long task, while allowing us
to continue the execution of the code
 */

var timeoutCallback = function(){
    console.log("Done!");
}
setTimeout(timeoutCallback, 5000);


setTimeout(function(){
    console.log("Done!");
}, 5000);


function useCallback(callbackFunction){
    callbackFunction(1);
    callbackFunction(2);
    callbackFunction(3);
}

function callback(sentence){
    console.log(sentence);
}

useCallback(callback);