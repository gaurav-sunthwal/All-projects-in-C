#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student {
    int rollNo;
    char name[MAX_NAME_LENGTH];
    char subject[MAX_NAME_LENGTH];
    int sub1Marks;
    int sub2Marks;
    int sub3Marks;
    int totalMarks;
    float percentage;
};

void addStudent(struct Student students[], int *numStudents) {
    if (*numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached!\n");
        return;
    }

    struct Student newStudent;

    printf("Enter roll number: ");
    scanf("%d", &newStudent.rollNo);

    printf("Enter name: ");
    scanf("%s", newStudent.name);

    printf("Enter subject: ");
    scanf("%s", newStudent.subject);

    printf("Enter marks for Subject 1: ");
    scanf("%d", &newStudent.sub1Marks);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &newStudent.sub2Marks);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &newStudent.sub3Marks);

    newStudent.totalMarks = newStudent.sub1Marks + newStudent.sub2Marks + newStudent.sub3Marks;
    newStudent.percentage = (float)newStudent.totalMarks / 3;

    students[*numStudents] = newStudent;
    (*numStudents)++;
}

void displayStudents(struct Student students[], int numStudents) {
    if (numStudents == 0) {
        printf("No students data available.\n");
        return;
    }

    printf("Roll No\tName\tSubject\tSub1\tSub2\tSub3\tTotal\tPercentage\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\t%.2f%%\n",
               students[i].rollNo, students[i].name, students[i].subject,
               students[i].sub1Marks, students[i].sub2Marks, students[i].sub3Marks,
               students[i].totalMarks, students[i].percentage);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
