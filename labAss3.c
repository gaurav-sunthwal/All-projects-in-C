#include <stdio.h>

int main()
{
    char choice;
    int num1, num2, result;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("Enter your choice (1 or 2): ");

    scanf(" %c", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice)
    {
    case '1':
        result = num1 + num2;
        printf("Result of addition: %d\n", result);
        break;
    case '2':
        result = num1 - num2;
        printf("Result of subtraction: %d\n", result);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
