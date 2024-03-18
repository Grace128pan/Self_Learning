// To get the absolute value of typed in number
//program 5.1

# include <stdio.h>

int main()
{
    int number;
    printf("Type in your number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        number = - number;
        printf("The absolute value is %i\n", number);
    }
    else{
        number = number;
        printf("The absolute value is %i\n", number);
    }

    return 0;
}