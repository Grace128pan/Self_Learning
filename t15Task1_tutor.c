#include <ctype.h>
#include <stdio.h>

int weeks = 0;

float calc_hours(int hours[], int weeks, char output);
int main(void)
{
    // TODO: create input for weeks and control that it should be no less than 0
    int weeks = 0;
    do{
        printf("Number of weeks learning:");
        scanf("%i", &weeks);
    }while(weeks < 1);
    // This in an empty array, try changing weeks count and outputting what is in the array after inicialization
    int hours[weeks];
    // TODO: loop trough week count
    //          and input hours for each week
    for (int i = 0; i < weeks; i ++)
    {
        printf("Week %i hours: ", i);
        scanf("%i", &hours[i]);
    }
    char output; // 'a'
    do
    {
       printf("T - total / A - average: ");
       scanf("%c", &output); 
       output = toupper(output);
    } 
    while (output != 'T' && output != 'A');
    
    // TODO: create do while loop until output is T or A 
    //          at input moment - change input to capital letters

    // this is the function call
    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output){
    int totalTime = 0;
    for(int i = 0; i < weeks; i++){
        totalTime += hours[i];
    }
    // TODO: calculate total time with for loop

    // Check is output is T or A
    //      and return appropriate information
    // Take notice that you will have a return statement in each if statement branch
    if (output == 'T'){
        return totalTime;
    }else{
        float avgTime = (float) totalTime /weeks;
        return avgTime;
    }
}
