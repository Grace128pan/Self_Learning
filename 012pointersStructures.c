//working with pointers and structures  page 285
/*
1.structures are defined like this
struct date {
    int month;
    int day;
    int year;
};
struct date todaysDate;
2. we can define a variable to be a pointer to a struct date variable:
struct date *datePtr;
datePtr = &todaysDate;
after this assignment, we can indirectly access any of the members of the date structure pointed by datePtr
(*datePtr).day = 21;
3. to test the value of month stored in the date structure pointed by datePtr, we can write a statement
if ((*datePtr).month == 12)
    printf("It's July\n");
4.pointer operators -> can be used to access the members of a structure directly
(*x).y is equivalent to x->y
so previous example if ((*datePtr).month == 12) can be written as 
if (datePtr->month == 12)
    printf("It's July\n");
*/

//program 10.4 using pointers to structures
//program to illustrate structure pointers

#include <stdio.h>

int main (void) {
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;
    datePtr = &today;

    datePtr -> month = 9;
    datePtr -> day = 25;
    datePtr -> year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);

    return 0;
}