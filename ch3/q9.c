/*
Question 9
 write a program to check if a student passed or failed.
*/
#include <stdio.h>

int main() {
    int marks;
    printf("enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    } else if (marks < 40) {
        printf("The student has failed.\n");
    } else {
        printf("The student has passed.\n");
    }

    return 0;
}