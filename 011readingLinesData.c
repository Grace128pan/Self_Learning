//program 9.6 reading lines of data 
//page 250

# include <stdio.h>

int main(void) {
    int i;
    char line[81];
    void readLine (char buffer[]);

    for (i = 0; i < 3; i++) {
        readLine(line);
        printf("%s\n\n", line);
    }
    return 0;
}

//function to read a line of text from the terminal

void readLine(char buffer[]) {
    char character;
    int i = 0;

    do {
        character = getchar();
        buffer[i] = character;
        i++;
    } while (character != '\n');
    buffer[i-1] = '\0'; //the index i -1 is correct before the index number is incremented by 1
}

//a remainder about do-while
/*
#include <stdio.h>

int main() {
    int i = 1;
    
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    
    return 0;
}

*/

/*
printf("Enter a line of text, up to 80 characters. Hit enter when done: \n");
give instructions to users can avoid overflow
*/