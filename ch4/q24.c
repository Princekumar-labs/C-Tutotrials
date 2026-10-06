/*
question 24
 print this pattern using nested loops/
    *****
    *****
    *****
    *****
*/

#include <stdio.h>
int main() {
    int rows, columns;
    int i, j;

    printf("enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}