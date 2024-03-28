/*
program6.6 This program will introduce how character array can be used in c programming.
*/
#include <stdio.h>

int main()
{
    char word[] = {'G', 'R', 'A', 'C', 'E','!' };
    int i;

    for (i =0; i<6; i++)
    {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}

/*
it is possible to initialize arrays without specifying the number of elements
in the array. The compiler will automatically count the number of elements in the array.
float sample_data[] = {[0] = 1.0, [49]=100.0, [99]=200.0 };// 100 elements is hinted there.
*/