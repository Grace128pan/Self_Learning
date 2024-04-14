/* 
1.it is possible to define variants inside the structure
struct date {
    int month;
    int day;
    int year;
} todaysDate, purchaseDate;
in this case, todaysDate and purchaseDate are two variables of type struct date.
2. we can also assign initial values to the variables in the normal fashion
struct date {
    int month;
    int day;
    int year;
} todaysDate = {1, 11, 2005};
3. if all of the variables of a particular structure type are defined when the structure is defined, the structure name
can be omitted
struct {
    int month;
    int day;
    int year;
} dates[100];
*/
//exercise 8.2   page233

// write a program to calculate the number of days between two dates
/*
Suppose we want to calculate the number of days between August 8, 2004, and February 22, 2005.
 We need to calculate the values of N1 and N2 as follows:
 N1 = 1461 x f(2004, 8) / 4 + 153 x g(8) / 5 + 3
   = (1461 x 2004) / 4 + (153 x 9) / 5 + 3
   = 2,927,844 / 4 + 1,377 / 5 + 3
   = 731,961 + 275 + 3
   = 732,239

N2 = 1461 x f(2005, 2) / 4 + 153 x g(2) / 5 + 21
   = (1461 x 2004) / 4 + (153 x 15) / 5 + 21
   = 2,927,844 / 4 + 2295 / 5 + 21
   = 731,961 + 459 + 21
   = 732,441

Therefore, the difference in days between the two dates is N2 - N1 = 732,441 - 732,239 = 202.
N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
Where:

f(year, month) is a function, and its return value depends on the month and year. 
If the month is less than or equal to 2, f(year, month) equals year - 1; otherwise, it equals year.
g(month) is also a function, and it similarly returns different values based on the month. 
If the month is less than or equal to 2, g(month) equals month + 13; otherwise, it equals month + 1.

Finally, it's worth noting that this formula is only applicable for dates after March 1, 1900. 
For dates between March 1, 1800, and February 28, 1900, 1 must be added to the calculated N value. 
For dates between March 1, 1700, and February 28, 1800, 2 must be added to the calculated N value.
*/

#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for the abs function

int f(int year, int month) {
    return month <= 2 ? year - 1 : year;
}

int g(int month) {
    return month <= 2 ? month + 13 : month + 1;
}

int calculate_N(int year, int month, int day) {
    int N = 1461 * f(year, month) / 4 + 153 * g(month) / 5 + day;

    // Adjustments for dates before March 1, 1900
    if (year < 1900 || (year == 1900 && month < 3)) {
        if (year < 1800 || (year == 1800 && month < 3)) {
            N += 2;
        } else {
            N += 1;
        }
    }

    return N;
}

int main() {
    printf("Welcome to the elapsed days calculator!\n");
    printf("Enter two dates to calculate the number of elapsed days between them.\n");

    int year1, month1, day1;
    int year2, month2, day2;

    printf("Enter the year of the first date: ");
    scanf("%d", &year1);
    printf("Enter the month of the first date: ");
    scanf("%d", &month1);
    printf("Enter the day of the first date: ");
    scanf("%d", &day1);

    printf("Enter the year of the second date: ");
    scanf("%d", &year2);
    printf("Enter the month of the second date: ");
    scanf("%d", &month2);
    printf("Enter the day of the second date: ");
    scanf("%d", &day2);

    int N1 = calculate_N(year1, month1, day1);
    int N2 = calculate_N(year2, month2, day2);

    int elapsed_days = abs(N2 - N1); // Use abs function from stdlib.h

    printf("The number of elapsed days between %d-%d-%d and %d-%d-%d is %d days.\n", year1, month1, day1, year2, month2, day2, elapsed_days);

    return 0;
}

/*
The
preceding formula is applicable for any dates after March 1, 1900 (1 must
be added to N for dates from March 1, 1800, to February 28, 1900, and 2
must be added for dates between March 1, 1700, and February 28, 1800).
this situation is considered in this case
*/



