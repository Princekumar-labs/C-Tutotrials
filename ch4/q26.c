/*
write a program to print prime number in a range.
*/

#include<stdio.h>
int main() {
    int lower, upper, i, j, isPrime;

    printf("Enter lower and upper range: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for(i = lower; i <= upper; i++) {
        if(i <= 1) {
            continue; // Skip numbers less than or equal to 1
        }
        isPrime = 1; // Assume number is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
        if(isPrime) {
            printf("%d,", i);
        }
    }
    printf("\n");
    return 0;
}