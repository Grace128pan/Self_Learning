/*
chapter6: working with arrays
1.setting up simple arrays
2.initializing arrays
3.working with character arrays
4.using the const keyword
5.implement multidimensional arrays
6.create variable-length arrays
array: define a set of ordered date items
We have to understand how arrays work with functions, structures, character strings and pointers
*/

/*
1.supposing we want to calculate the grades we entered, the averages, median, ascending order and such, array can be used
2. we can use array to store the names of the students, the grades, the number of students, the number of grades, the number of subjects, the number of students in each class, the number of students in each grade, the number of students in each subject, the number of students in each class
printf("Enter grade 1\n");
scanf("%i", &grade1);
printf("Enter grade 2\n");
scanf("%i". &grade2);
3.we can define arrays to store the grades
grades[0] = grades1;  // store the first grade in the first element of the array
g = grades[i]; //we assign grades[i] to g
grades[i] = 100; //we assign 100 to grades[i]
4. we can use for loop in array
for (i=0; i<100; i++)
{
    sum = sum + grades[i]; //this equals to sum += grades[i]
}
5.next_value =sorted_data[(low+high)/2];
arrays must be declared before they are used.
The declaration of an array specifies the type of the elements(int, float, char)and the number of elements in the array
int grades[100]; //this declares an array of 100 integers
*/
//program6.1 working with an array
#include <stdio.h>

int main()
{
    int values [10];
    int index;

    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] =values[0] + values[5];
    values[9] = values[5] / 10;
    --values[2]; //this equals to values[2] = values[2] - 1;

    for (index = 0; index <10; index++)
    {
        printf("values[%i] = %i\n", index, values[index]);
    }
    return 0;
} // if some values[i] are not assigned, they will display unpredicted numbers in the terminal.