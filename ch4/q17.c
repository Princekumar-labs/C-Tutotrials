/*
Question17
 keep takinf nubers as input from user util user enters an odd an odd number
*/

#include<stdio.h>
int main() {
    int num;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("You entered: %d\n", num);

        if(num%2 != 0){
            break;
        } 

    } while(1);
    printf("You entered an odd number: %d\n", num);
    return 0;
}