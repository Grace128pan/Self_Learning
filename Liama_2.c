#include <stdio.h>

int main(){
    int n, m;
    printf("Start Size:\n");
    scanf("%d", &n);
    printf("End Size:\n");
    scanf("%d", &m);

    int years = 0;
    do {
        int born = n / 3; // llamas born
        int dead = n / 4; // llamas die
        n = n + born - dead;
        years++;
    } while (n < m);

    printf("It will take %d years to reach a population of %d llamas.\n", years, m);
    return 0;
}

