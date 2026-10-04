/*
Question18
 keep takinf nubers as input from user util user enters a number is multiple of 5
*/

#include<stdio.h>
int main() {
    int num;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("You entered: %d\n", num);

        if(num%5 == 0){
            break;
        } 

    } while(1);
    printf("You entered a number that is a multiple of 5: %d\n", num);
    return 0;
}