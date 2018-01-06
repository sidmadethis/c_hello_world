#include <stdio.h>

int main(){

    double l,w=0.0;
    printf("Enter the length of a rectangle: ");
    scanf("%lf",&l);
    printf("\nEnter the width of a rectangle: ");
    scanf("%lf",&w);
    
    /* the  & in the above scanf is needed to point to the correct 
    memory address- without it the program tries to write in the
    wrong sections of memory */

    /* https://en.wikipedia.org/wiki/Scanf_format_string */

    float area = l * w;
    printf("\nThe area of the rectangle is: %.2lf\n", area);
    
    /* the .2 after the % to manipulate the number of decimals? not sure */

    return 0;
}


