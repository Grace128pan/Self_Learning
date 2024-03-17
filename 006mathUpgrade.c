#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random non-negative integer with n digits
int generateNumber(int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result * 10 + rand() % 10;
    }
    return result;
}

int main() {
    int level, score = 0;
    srand(time(NULL));

    printf("Enter level (1, 2, or 3): ");
    scanf("%d", &level);

    while (level < 1 || level > 3) {
        printf("Invalid level. Please enter 1, 2, or 3: ");
        scanf("%d", &level);
    }

    for (int i = 0; i < 5; i++) {
        int x, y, answer, userAnswer, tries = 0;
        
        x = generateNumber(level);
        y = generateNumber(level);
        answer = x + y;

        printf("%d + %d = ", x, y);
        scanf("%d", &userAnswer);

        while (userAnswer != answer && tries < 3) {
            printf("Try again: ");
            scanf("%d", &userAnswer);
            tries++;
        }

        if (userAnswer == answer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("The correct answer is: %d\n", answer);
        }
    }

    printf("Your score: %d/5\n", score);

    return 0;
}
