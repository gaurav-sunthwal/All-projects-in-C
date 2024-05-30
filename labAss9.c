#include <stdio.h>

// Function prototypes
int isLeapYear(int year);
int daysInMonth(int month, int year);
void displayCalendar(int year);

int main() {
    int year;

    // Input year from the user
    printf("Enter the year: ");
    scanf("%d", &year);

    // Display calendar for the input year
    displayCalendar(year);

    return 0;
}

// Function to check if the given year is a leap year or not
int isLeapYear(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return 1; // Leap year
    else
        return 0; // Not a leap year
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year))
            return 29; // February has 29 days in a leap year
        else
            return 28; // February has 28 days in a non-leap year
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, November have 30 days
    } else {
        return 31; // January, March, May, July, August, October, December have 31 days
    }
}

// Function to display the calendar for the given year
void displayCalendar(int year) {
    int month, day, totalDays;
    
    printf("\n\n\t\t\t Calendar - %d \n\n", year);

    for (month = 1; month <= 12; month++) {
        // Display month name
        printf("\n\n ------------ %d ------------\n", month);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        // Get the total days in the current month
        totalDays = daysInMonth(month, year);

        // Print spaces for the days of the week before the first day of the month
        for (day = 1; day < 1 + (totalDays % 7); day++)
            printf("    ");
        
        // Print the days of the month
        for (day = 1; day <= totalDays; day++) {
            printf("%4d", day);
            if ((day + totalDays % 7) % 7 == 0 || day == totalDays)
                printf("\n");
        }
    }
}
