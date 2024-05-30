#include <stdio.h>

int main()
{
    int a, b, c;
    printf("ALL THE NUMBERS SHOULD BE DISTINCT\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("The smallest number is %d\n", a);
    }
    else if (b < a && b < c)
    {
        printf("The smallest number is %d\n", b);
    }
    else if (c < a && c < b)
    {
        printf("The smallest number is %d\n", c);
    }
    else
    {
        printf("All numbers are equal\n");
    }

    return 0;
}
