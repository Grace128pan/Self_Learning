/* page 149
array exercise 2:
modify program 6.1 so that the elements of the array values are initially set to 0. use a for loop to perform the initialization.
*/

#include <stdio.h>

int main() {
    int values[10];
    int index;

    for (index = 0; index < 10; index++) {
        values[index] = 0;
        printf ("values[%i] = %i\n", index, values[index]);
    }

    return 0;
}

//Great job! Keep it going!