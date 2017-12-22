#include <stdio.h>

int main(){
    int factor;
    printf("pick a number to factor: ");
    scanf("%d", &factor);
    printf("\nthis is the number you chose: %d\n", factor);

    int total = factor * (factor - 1);
    printf("\nnew number: %d\n", total);
}


