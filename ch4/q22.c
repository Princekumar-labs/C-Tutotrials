/*
print reverse of the table for a number taken as input from user
*/

#include<stdio.h>
int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    for(int i=10; i>=1; i--) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}