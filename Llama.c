#include <stdio.h>

int main() {
    int n, m;
    // Prompt user to enter start size, re-enter if it's less than 0
    do {
        printf("Start Size: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Start size must be a non-negative integer. Please re-enter.\n");
        }
    } while (n < 0);

    // Prompt user to enter end size
    printf("End Size: ");
    scanf("%d", &m);
    if (m <= n) {
        do {
            printf("End size must be greater than start size. Please re-enter.\n");
            printf("End Size: ");
            scanf("%d", &m);
        } while (m <= n);
    }

    // Re-prompt user to enter end size if it's less than or equal to start size

    int born = 0;
    int dead = 0;
    int years = 0;
    if (n < m) {
        do {
            born = n / 3; // llamas born
            dead = n / 4; // llamas die
            n = n + born - dead;
            years++;
        } while (n < m);
    }

    printf("It will take %d years to reach a population of %d llamas.\n", years, m);
    return 0;
}

