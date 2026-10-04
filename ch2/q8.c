/*
Question 8
 a. if it's sunday & it's snowing -> true
 b. if it's monday or it's raining -> true
 c. if a number is greater than 9 & less than 100 -> true (2 digit number)
*/

#include<stdio.h>

int main() {
    int isSunday ; // 1 for true, 0 for false
    int isSnowing ; // 1 for true, 0 for false
    int isMonday ; // 1 for true, 0 for false
    int isRaining ; // 1 for true, 0 for false
    int x;

    // a. if it's sunday & it's snowing -> true
    printf("Enter 1 for true and 0 for false:\n");
    printf("Is it Sunday? ");
    scanf("%d", &isSunday);
    printf("Is it snowing? ");
    scanf("%d", &isSnowing);
    if (isSunday && isSnowing) {
        printf("It's Sunday and it's snowing: true\n");
    } else {
        printf("It's Sunday and it's snowing: false\n");
    }

    // b. if it's monday or it's raining -> true
    printf("Is it Monday? ");
    scanf("%d", &isMonday);
    printf("Is it raining? ");
    scanf("%d", &isRaining);
    if (isMonday || isRaining) {
        printf("It's Monday or it's raining: true\n");
    } else {
        printf("It's Monday or it's raining: false\n");
    }

    // c. if a number is greater than 9 & less than 100 -> true (2 digit number)
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 9 && x < 100) {
        printf("The number %d is a two-digit number: true\n", x);
    } else {
        printf("The number %d is a two-digit number: false\n", x);
    }

    return 0;
}