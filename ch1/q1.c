/*
Question: 1
 write a program to calculate the area of a square.
*/

#include<stdio.h>
int main() {
    float side;
    printf("enter the length of the side: ");
    scanf("%f", &side);
    
    float area = side * side;
    printf("area is : %f\n", area);
    return 0;
}