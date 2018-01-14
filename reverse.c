#include <stdio.h>
#include <string.h>

/* reverse the character string s */

int main() {

    char forward_string[100];

    //printf("heelloooo\n");
    printf("Enter a string to reverse: \n");
    //scanf is dangerous... buffer overflows.  maybe use fgets?
    //scanf("%s", forward_string);
    fgets(forward_string, 20, stdin);
    //doesnt work need to learn how to use fgets
    //fgets needs 3 arguments - the thing it is reading
    // -some number, and some way to read it? still not positive

    printf("This is the string you entered: %s\n", forward_string);
    
    //now to reverse the string. first thing to do is get the
    //total length of the string  ** need to include <string.h>

    int k = strlen(forward_string);
    printf("this is the length of the string you entered: %d\n", k);
    
    // this gives one more than I was expecting. It has to do with the \0 terminator that I am
    // not adding for some reason? the return character is different from null??

    return 0;
}


