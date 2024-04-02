#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void) {
    int weeks;
    
    // Input the number of weeks learning
    do {
        printf("Number of weeks learning: ");
        scanf("%d", &weeks);
    } while (weeks < 1);

    int hours[weeks];
    
    // Input hours for each week
    for (int i = 0; i < weeks; i++) {
        printf("Week %d hours: ", i);
        scanf("%d", &hours[i]);
    }
    
    char output;
    
    // Input the output type (Total or Average)
    do {
        printf("T - total / A - average: ");
        scanf(" %c", &output); // Note the space before %c to consume whitespace
        output = toupper(output);
    } while (output != 'T' && output != 'A');

    // Call the function and print the result
    printf("%.1f hours\n", calc_hours(hours, weeks, output));

    return 0;
}

// Calculate total or average hours
float calc_hours(int hours[], int weeks, char output) {
    int totalTime = 0;

    // Calculate total time
    for (int i = 0; i < weeks; i++) {
        totalTime += hours[i];
    }

    // Check if output is Total or Average
    if (output == 'T') {
        return totalTime;
    } else {
        float avgTime = (float) totalTime / weeks;
        return avgTime;
    }
}
