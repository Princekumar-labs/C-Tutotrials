/*
Question 23
 calculate the sum of all numbers between 1 to n.
*/

#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        sum += i;
    }
    printf("Sum of numbers between 1 and %d is: %d\n", n, sum);
    return 0;
}