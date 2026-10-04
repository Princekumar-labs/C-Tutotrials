/*
Question 12
write a program to find if a character entered by user id upper case or lower case or digit or special character
*/


#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'z') {
        if(ch >= 'A' && ch <= 'Z') {
            printf(" uppercase letter.\n");
        } else if(ch >= 'a' && ch <= 'z') {
            printf(" lowercase letter.\n");
        }
    } else if(ch >= '0' && ch <= '9') {
        printf(" digit.\n");
    } else {
        printf(" special character.\n");
    }

    return 0;
}