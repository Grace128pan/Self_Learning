#include <stdio.h>

int main() {
    unsigned int n, m;
    n < m;
    printf("Start Size: ");
    scanf("%d", &n);
    printf("End Size: ");
    scanf("%d", &m);

    unsigned int born, dead, years = 0;
    while (n < m) {
       born = n / 3; // llamas born
       dead= n / 4; // llamas die
        n += born - dead;
        years++;
    }

    printf("It will take %d years to reach a population of %d llamas.\n", years, m);
    return 0;
}
