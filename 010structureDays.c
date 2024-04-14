/*
If you take the value of N as computed in exercise 2, subtract 621,049
from it, and then take that result modulo 7, you get a number from 0 to 6
that represents the day of the week (Sunday through Saturday,
respectively) on which the particular day falls. For example, the value of
N computed for August 8, 2004, is 732,239 as derived previously.
732,239 − 621,049 gives 111,190, and 111,190 % 7 gives 2, indicating
that this date falls on a Tuesday.
Use the functions developed in the previous exercise to develop a
program that displays the day of the week on which a particular date falls.
Make certain that the program displays the day of the week in English
(such as “Monday”).
*/
#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

int f(int year, int month) {
    return month <= 2 ? year - 1 : year;
}

int g(int month) {
    return month <= 2 ? month + 13 : month + 1;
}


int calculate_N(struct Date date) {
    int N = 1461 * f(date.year, date.month) / 4 + 153 * g(date.month) / 5 + date.day;
    return N - 621049; // Subtract 621049
}

//Since Zeller's Congruence usually assigns Sunday as 0, Monday as 1, and so on, we adjust the day_of_week variable by adding 1 to it 
//before taking the modulo 7 operation. This adjustment ensures that Sunday is represented as 1, Monday as 2, and so forth.
const char* get_day_of_week(int N) {
    // Calculate the day of the week
    int day_of_week = (N + 1) % 7; // Add 1 here

    // Determine the day of the week in English
    switch (day_of_week) {
         case 0:
            return "Saturday";
        case 1:
            return "Sunday";
        case 2:
            return "Monday";
        case 3:
            return "Tuesday";
        case 4:
            return "Wednesday";
        case 5:
            return "Thursday";
        case 6:
            return "Friday";
        default:
            return "Unknown"; // Should not reach here
    }
}

int main() {
    struct Date date = {2024, 4, 13}; // Example date: August 8, 2004

    int N = calculate_N(date);
    const char* day_of_week = get_day_of_week(N);

    printf("The date %d-%d-%d falls on a %s.\n", date.year, date.month, date.day, day_of_week);

    return 0;
}

//This is a program to calculate the day of the week for a given date using Zeller's Congruence.