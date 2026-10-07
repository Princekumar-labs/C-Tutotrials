/*
question 27
write 2 functions - one to print "Hello, World!" and another to print "C is fun!"
*/

#include<stdio.h>
void printHelloWorld();
void printCIsFun();

int main() {
   
    printHelloWorld();
    printCIsFun();
    
    return 0;

}

void printHelloWorld() {
    printf("Hello, World!\n");
}

void printCIsFun() {
    printf("C is fun!\n");
}
