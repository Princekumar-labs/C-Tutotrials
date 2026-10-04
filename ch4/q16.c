/*
Question 16
 print the table of a number input byt the user
*/

#include<stdio.h>
int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}