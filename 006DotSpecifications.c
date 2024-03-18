# include <stdio.h>

int main()
{
    int dollars, cents, count;

    for (count = 1; count <= 10; count++)
    {
        printf("Enter Dollars: \n");
        scanf("%i", &dollars);

        printf("Enter Cents: \n");
        scanf("%i", &cents);

        printf("$%i.%.2i\n\n", dollars, cents); //here %.2i means we get two decimal places
    }

    return 0;
}