/**
 * @author Weiquan Mai
 * @date March 18, 2026
 * Problem 1.12
 * Write a program that prints its input one word per line.
 */

 #include <stdio.h>
 #define IN 1
 #define OUT 0

 int main(){
    int c, state;
    state = OUT;

    // Keep running until end of file
    while((c = getchar()) != EOF){
        // If we're outside a word, print a new line and set state to out
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                putchar('\n');
                state = OUT;
            }
        } 
        else{
            if(state == OUT){
                state = IN;
            }
            // If it's not a blank character, print the character
            putchar(c);
        }
    }

    return 0;
 }
