#include <stdio.h>

int main(){

    float l,w=0.0;
    printf("Enter the length of a rectangle: ");
    scanf("%f",l);
    printf("\nEnter the width of a rectangle: ");
    scanf("%f",w);
    
    float area = l * w;
    printf("\nThe area of the rectangle is: %f", area);

    return 0;
}


