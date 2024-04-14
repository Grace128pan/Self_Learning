/* page234/1270  exercise 8.3
Write a function elapsed_time that takes as its arguments two time
structures and returns a time structure that represents the elapsed time (in
hours, minutes, and seconds) between the two times. So the call
elapsed_time (time1, time2)
where time1 represents 3:45:15 and time2 represents 9:44:03, should
return a time structure that represents 5 hours, 58 minutes, and 48
seconds. Be careful with times that cross midnight.
*/

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time elapsed_time(struct Time times1, struct Time times2) {
    struct Time elapsed;

    int times1_seconds = times1.hours * 3600 + times1.minutes * 60 + times1.seconds;
    int times2_seconds = times2.hours * 3600 + times2.minutes * 60 + times2.seconds;

    int difference_seconds = times2_seconds - times1_seconds;

    if (difference_seconds < 0) {
        difference_seconds += 24 * 3600; // Add 24 hours to get the positive difference
    }

    elapsed.hours = difference_seconds / 3600;
    elapsed.minutes = (difference_seconds % 3600) / 60;
    elapsed.seconds = difference_seconds % 60;

    return elapsed;
}

int main() {
    struct Time times1 = {3, 45, 15};
    struct Time times2 = {9, 44, 3};

    struct Time result = elapsed_time(times1, times2);

    printf("Elapsed time: %d hours, %d minutes, %d seconds\n", result.hours, result.minutes, result.seconds);
    return 0;
}
