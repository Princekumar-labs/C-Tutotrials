/*
Question 15
print the sum of first n natural numbers, if n is given by the user
*/

#include<stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }

    printf("The sum is: %d\n", sum);

    for(int i=n; i>=1; i--) {
        printf("%d\n", i);
    }

    return 0;
}