#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH], result[MAX_LENGTH * 2];
    int choice;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    printf("Menu:\n");
    printf("1. Get length of string 1\n");
    printf("2. Join two strings\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of string 1: %lu\n", strlen(str1));
            break;
        case 2:
            strcpy(result, str1);
            strcat(result, str2);
            printf("Result after joining: %s\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
