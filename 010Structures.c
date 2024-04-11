/*
chapter6 page 202
1.define structure
2.passing structures to functions
3.arrays of structures
4.structures of arrays
1.1 structures can group elements together
*/

/*
1.the basics of structures
structure in C allows you to store date such as 9/25/2015
int month = 9, day=25, year=2015 could work fine, but it is a little bit troublesome
another way is to use structure
struct date {
    int month;
    int day;
    int year;
}
we can also define struct date today; struct date purchaseDate;
struct date today, purchaseDate;
today.month = 9; today.day = 25; today.year = 2015;
2. to test the value of month
if (today.month == 12) {
    nextMonth = 1;
}
if (today.month == 1 && today.day == 1) {
    printf("Happy New Year!!! \n");
}
*/
// Program 8.1 Illustrating a structure 

#include <stdio.h>

int main() {
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today;
    today.month = 9;
    today.day = 25;
    today.year = 2015;
//if we want the output to be 9/25/2015, we can use %i/%i/%i instead
    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year %100);

    return 0;
}