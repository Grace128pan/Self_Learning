/*
page225/1270
structures containing structures
1. A structure can contain another structure as a member.
struct dateAndTime {
    struct date sdate;
    struct time stime;
}
variables can be defined to be of type struct dateAndTime
struct dateAndTime event;
to reference the date structure of the variable event, the syntax is the same:
event.sdate
for example, we can assign event.sdate.month = 12;
event.sdate = timeUpdate(event.sdate);
event.stime.seconds++;
2. struct dateAndTime event = {{12, 31, 2004}, {23, 59, 59}};
struct dateAndTime event = {{.month = 12, .day = 31, .year = 2004}, {.hours = 23, .minutes = 59, .seconds = 59}};
3. it is possible to set up an array of structures that contain other structures.
struct dateAndTime events[100];
events[i].sdate = dateUpdate(events[i].sdate);
events[0].stime.hour = 12;
events[0].stime.minute = 0;
events[0].stime.second = 0; can be used to set the first time in the array to noon
*/

/*
structures containing arrays
1.struct month {
    int numberOfDays; // number of days in the month
    char name[3];   // 3 characters for the month name
}
a variable struct month aMonth; can be defined
aMonth.numberOfDays = 31;
aMonth.name[0] = 'J';
aMonth.name[1] = 'a';
aMonth.name[2] = 'n';
we can also do this:
struct month aMonth = {31, {'J', 'a', 'n'}};
2. struct month months[12]; // array of 12 month structures
*/

//program 8.7 illustrating structures and arrays

#include <stdio.h>

int main (void) {
    int i;
    struct month {
        int numberOfDays;
        char name[3];
    };

    const struct month months[12] = {
        {31,{'J','a','n'}}, {28,{'F','e','b'}}, {31,{'M','a','r'}}, {30,{'A','p','r'}}, {31,{'M','a','y'}}, {30,{'J','u','n'}},
        {31,{'J','u','l'}}, {31,{'A','u','g'}}, {30,{'S','e','p'}}, {31,{'O','c','t'}}, {30,{'N','o','v'}}, {31,{'D','e','c'}}
    };

    printf("Month  Number of Days\n");
    printf("-----  --------------\n");
    
    for (i=0; i<12; i++) {
        printf("%c%c%c           %i\n", months[i].name[0],months[i].name[1], months[i].name[2], months[i].numberOfDays);
    }
    return 0;
}