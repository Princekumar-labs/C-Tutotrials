/*
Question 10
 write a program to give grades to a student
 marks<40 = f
 40<=marks<60 = c
 60<=marks<80 = b
 80<=marks<90 = a
 90<=marks<=100 = a+
*/
#include <stdio.h>

int main() {
   int marks;
    printf("enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks <0 || marks > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    } else if (marks < 40) {
        printf("F\n");
    } else if (marks < 60) {
        printf("C\n");
    } else if (marks < 80) {
        printf("B\n");
    } else if (marks < 90) {
        printf("A\n");
    } else {
        printf("A+\n");
    }

    return 0;
}