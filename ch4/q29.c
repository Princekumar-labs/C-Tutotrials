/*
question 29
use library functions to calculate the square of a number given by user.
*/

#include<stdio.h>
#include<math.h>

void calculate(float value);

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    calculate(num);

    return 0;
}

void calculate(float value) {
    printf("Square of %.2f is %.2f\n", value, pow(value, 2.0));
}
