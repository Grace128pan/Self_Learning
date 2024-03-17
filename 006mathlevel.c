/*
Step 1, get user input for level
Step 2, generate 10 different random int
    level 1: range 0:10
    level 2: range 10:50
    level 3: range 50:100
Step 3, form five questions and get results
Step 4, get user input for each question and test the result, record the scores
Step 5, print the final score 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Make sure the random number generated are differnt in different time, took me some time to understand why

int generate_rand(int m, int n) {
    srand(time(NULL));

    // Generate 10 different random numbers
    int a = rand() % (n - m + 1) + m;
    return a;

}

int main(){
    // Get user input of level
    int level, m, n;
    printf("Level(1, 2, 3): ");
    scanf("%d", &level);
    if (level == 1) {
        m = 0;
        n = 10;
    } else if (level == 2) {
        m = 10;
        n = 50;
    } else if (level == 3) {
        m = 50;
        n = 100;
    }
    int count = 1;
    int score = 0;
    int tried = 0;
    do {
        int a = generate_rand(m, n);
        int b; // make b different from a, which is weird for me. Took me a while to understand why
        do {
            b = generate_rand(m, n);
        } while (a == b);
        int result = a + b;
        int user_input;
        do {
            printf("\nQuestion %d : %d + %d = ", count, a, b);
            scanf("%d", &user_input);
            if (result == user_input) {
                score += 2;
                count += 1;
                break;
            }else {
                tried += 1;
            }
        } while (tried < 3);
        if (tried == 3) {
            count += 1;
            tried = 0;
        }
        
    } while (count <= 5);
    printf("Score: %d", score);
    return 0;
}