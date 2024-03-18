/*
a component relational test: one or more simple relational tests joined by logical AND or OR (&&  ||)
for example:
if (grade >= 70 && grade <= 79)
{
    grades_70_to_79++;
}

if (index < 0 || index > 99) 
{
    printf("Error - index out of range\n");
}
*/

/*
write a program that calculates the leap year
a year is a leap year if it is divisible by 4
a year that is divisible by 100 is not a leap year unless it is also divisible by 400
if ((rem_4 == 0 && rem_100!= 0) || rem_400 == 0)
{
    print("It is a leap year.\n")
}
*/

#include <stdio.h>

int main ()
{
    int year, rem_4, rem_100, rem_400;

    printf("Enter the year to be tested: ");
    scanf("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
    {
        printf("The year %i is a leap year.\n", year);
    }
    else
    {
        printf("Nope, the year %i is not a leap year.\n", year);
    }

    return 0;
}