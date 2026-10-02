/*
Question 5
 write a program to check if a number is divisible by 2 or not.
*/

#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", x / 2 == 0);
    return 0;
}