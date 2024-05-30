#include <stdio.h>

// Function to calculate factorial without recursion
unsigned long long factorialWithoutRecursion(int n) {
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

// Function to calculate factorial with recursion
unsigned long long factorialWithRecursion(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialWithRecursion(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate factorial without recursion
    unsigned long long resultWithoutRecursion = factorialWithoutRecursion(num);
    printf("Factorial of %d without recursion is: %llu\n", num, resultWithoutRecursion);
    
    // Calculate factorial with recursion
    unsigned long long resultWithRecursion = factorialWithRecursion(num);
    printf("Factorial of %d with recursion is: %llu\n", num, resultWithRecursion);

    return 0;
}
