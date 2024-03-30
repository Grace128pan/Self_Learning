//program 7.3 more on calling functions

#include <stdio.h>

void printMessage(void) {
    printf("Who do not like programming?\n");
}

int main(void) {
    int i;
    for(i =1; i <=6; i++) {
        printMessage();   
    } 
    return 0;
}