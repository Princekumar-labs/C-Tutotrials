/*
Question: 2
 write a program to calculate the area of a circle.
*/

#include<stdio.h>
int main() {
    float radius;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    
    float area = 3.14159 * radius * radius;
    printf("area is : %f\n", area);
    return 0;
}