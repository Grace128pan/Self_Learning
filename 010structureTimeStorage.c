//page215 a structure to store time
/*
struct time {
    int hours;
    int minutes;
    int seconds;
}
1.most computers express time in terms of 1 24-hour clock
2. we need to solve some problems if we want to update time by one day
1) if the number of seconds reaches 60, we need to reset it to 0 and increment the number of minutes by 1
2) if the number of minutes reaches 60, we need to reset it to 0 and increment the number of hours by 1
3)if the number of hours reaches 24, the hours, minutes and seconds all need to be reset to 0
*/

//program 8.5 uses a function called timeUpdate, which takes the current time as its argument and returns a time that is one 
//second later

//program 8.5 updating the time by one second
#include <stdio.h>
struct time {
    int hour;
    int minutes;
    int seconds;
};

int main(void) {
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;

    printf("Enter the time(hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate(currentTime);
    printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);
    return 0;
}

//function to update the time by one second
struct time timeUpdate(struct time now) {
    now.seconds++;
    if (now.seconds == 60) { //next minute
        now.seconds = 0;
        now.minutes++;
        if (now.minutes == 60) { //next hour
            now.minutes = 0;
            now.hour++;
        }
        if (now.hour == 24) { //midnight
            now.hour = 0;
        }
    }
    return now;
}

//it is very interesing to update the time by one second