#include <stdio.h>

int main(){
    int factor;
    int total=1;
    int quantity=1;
    printf("pick a number to factor: ");
    scanf("%d", &factor);
    printf("\nthis is the number you chose: %d\n", factor);

    while(quantity<=factor){
	total=total*quantity;
	quantity++;
    }
    
    printf("\nThe factorial of %d is: %d\n", factor, total);
    
}


