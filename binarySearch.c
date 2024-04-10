#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

// Number of menu items
#define NUM_ITEMS 10

// Menu items have item name and price
typedef struct
{
    char item[50];
    float price;
} menu_item;

// Array of menu items
menu_item menu[NUM_ITEMS];

// Add items to menu
void add_items(void);

// Calculate total cost
float get_cost(char item[50]);

// Binary search implementation (not needed for this version)
// int binary_search(char item[50]);

// Case-insensitive string comparison
int stricmp(const char *s1, const char *s2);

int main(void)
{
    add_items();

    printf("Choose from the following menu to order. Press enter when done.\n\n");

    for (int i = 0; i < NUM_ITEMS; i++)
    {
        printf("%s: $%.2f\n", menu[i].item, menu[i].price);
    }
    printf("\n");

    float total = 0;
    while (1)
    {
        char item[50];
        printf("Enter a food item: ");
        fgets(item, sizeof(item), stdin);
        
        // Remove newline character from input
        item[strcspn(item, "\n")] = '\0';

        // Convert input to lowercase for case-insensitive comparison
        for (int i = 0; item[i]; i++)
            item[i] = tolower(item[i]);

        if (strlen(item) == 0)
        {
            printf("\n");
            break;
        }

        total += get_cost(item);
    }

    printf("Your total cost is: $%.2f\n", total);

    return 0;
}

void add_items(void)
{
    strcpy(menu[0].item, "Burger");
    menu[0].price = 9.5;
    strcpy(menu[1].item, "Vegan Burger");
    menu[1].price = 11;
    strcpy(menu[2].item, "Hot Dog");
    menu[2].price = 5;
    strcpy(menu[3].item, "Cheese Dog");
    menu[3].price = 7;
    strcpy(menu[4].item, "Fries");
    menu[4].price = 5;
    strcpy(menu[5].item, "Cheese Fries");
    menu[5].price = 6;
    strcpy(menu[6].item, "Cold Pressed Juice");
    menu[6].price = 7;
    strcpy(menu[7].item, "Cold Brew");
    menu[7].price = 3;
    strcpy(menu[8].item, "Water");
    menu[8].price = 2;
    strcpy(menu[9].item, "Soda");
    menu[9].price = 2;
}

// Calculate total cost
float get_cost(char item[50])
{
    for (int i = 0; i < NUM_ITEMS; i++)
    {
        if (stricmp(item, menu[i].item) == 0)
            return menu[i].price;
    }
    
    printf("Item not found. Please enter an item from the menu.\n");
    return 0;
}

// Case-insensitive string comparison
int stricmp(const char *s1, const char *s2)
{
    while (*s1 && *s2 && tolower(*s1) == tolower(*s2))
    {
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}



