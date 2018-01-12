#include <stdio.h>

/* reverse the character string s */

int main() {

    char forward_string[100];

    //printf("heelloooo\n");
    printf("Enter a string to reverse: \n");
    //scanf is dangerous... buffer overflows.  maybe use fgets?
    //scanf("%s", forward_string);
    fgets(forward_string, stdin);
    //doesnt work need to learn how to use fgets

    printf("This is the string you entered: %s\n", forward_string);
    return 0;
}


