/*
 question 27
 write a function that prints Namaste if user is from India, Bonjour if user is from France.
*/

#include<stdio.h>
void Namaste();
void Bonjour();
void Hello();

int main() {
    char choice;
    printf("Enter f for France and i for India: ");
    char ch;
    scanf(" %c", &ch);
    if(ch == 'i') {
        Namaste();
    } else if(ch == 'f') {
        Bonjour();
    } else {
        Hello();
    }
    return 0;
}

void Namaste() {
    printf("Namaste\n");
}

void Bonjour() {
    printf("Bonjour\n");
}

void Hello() {
    printf("Hello\n");
}
