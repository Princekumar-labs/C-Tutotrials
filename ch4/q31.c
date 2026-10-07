/*
question 31
 write functions to calculate area of a square, a circle & a rectangle.
*/

#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectengleArea(float a, float b);

int main() {
    float side;
    float rad;
    float a, b;

    printf("choose shape: s for square, c for circle, r for rectangle: ");

    char ch;
    scanf(" %c", &ch);

    if (ch == 's') {
        printf("enter side: ");
        scanf("%f", &side);
        printf("area is: %f\n", squareArea(side));
    }
    else if (ch == 'c') {
        printf("enter radius: ");
        scanf("%f", &rad);
        printf("area is: %f\n", circleArea(rad));
    }
    else if (ch == 'r') {
        printf("enter length and breadth: ");
        scanf("%f %f", &a, &b);
        printf("area is: %f\n", rectengleArea(a, b));
    }
    else {
        printf("invalid choice\n");
    }

    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14f * rad * rad;
}

float rectengleArea(float a, float b) {
    return a * b;
}
