/*
Question 7
 Are the following valid or not?.
 a. int a = 8^8
 b. intx; int y = x;
 c. intx2, y2 = x2;
 d. char stars = '**'
*/

#include<stdio.h>
int main() {
    int a = 8^8; // Valid, but ^ is bitwise XOR, not exponentiation
    int x; int y = x; // Invalid, x is uninitialized
    int x2, y2 = x2; // Invalid, x2 is uninitialized
    char stars = '**'; // Invalid, single quotes are for single characters

    printf("a: %d\n", a);
    printf("y: %d\n", y); // This will print garbage value
    printf("y2: %d\n", y2); // This will print garbage value
    printf("stars: %c\n", stars); // This will print the first character of the string

    return 0;
}