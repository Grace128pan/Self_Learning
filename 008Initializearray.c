/*
1.we can simply initialize arrays in this way:
int counter[5] = {0, 0, 0, 0, 0};
int integers[5] = {1,2 ,3, 4, 5}; in this case integers[0] = 1, integers[1] = 2, and so on.
char letters[5] = {'a', 'b', 'c', 'd', 'e'};
2. it is not necessary to initialize all values in an array
float sample_data[100] = {100.0, 300.0, 500.5} ; // the rest of the elements will be initialized to 0.0
3. we can initialize an array using brackets
float numbers[500] = {[2] = 500.5, [1] = 300.0, [0] = 100.0}; // the rest of the elements will be initialized to 0.0
4. int x = 1234;
int a[10] = {[9]= x+1; [2]=3; [1]=2; [0] =1}
5. it is impossible to specify a repeat count in an array, we can use loops to initialize arrays in this case
*/

//program6.5 initialize arrays
#include <stdio.h>
int main()
{
    int array_values[10] = {0, 1, 4, 9, 16};
    int i;

    for (i=5; i<10; i++)
    {
        array_values[i] = i * i;
    }

    for (i=0; i<10; i++)
    {
        printf("array-values[%i] = %i\n", i, array_values[i]);
    }
    
    return 0;
}