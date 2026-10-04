/*
Question 14
print the number from 0 to n, if n is given by the user
*/

#include<stdio.h>
int main() {
    int n;
    printf("how many numbers you want to print: ");
    scanf("%d", &n);
    int i;
    for(i=0; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}