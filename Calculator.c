// Create mini Calculator 

#include <stdio.h>

int main()
{
    int a, b, Result;
    char icon;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &icon);

    if (icon == '+')
    {
        Result = a + b;
    }
    else if (icon == '-')
    {
        Result = a - b;
    }
    else if (icon == '/')
    {
        if (b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        Result = a / b;
    }
    else if (icon == '*')
    {
        Result = a * b;
    }
    else
    {
        printf("You selected a wrong character.\n");
    }

    printf("The Result is: %d\n", Result); 

    return 0;
}