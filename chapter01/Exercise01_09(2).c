/**
 * @author Weiquan Mai
 * @date March 18, 2026
 * Problem 1.9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF){
        // If current character is a blank
        if(c == ' '){
            // Skip all blanks in sequence
            if(state == IN);
            
            // Print first blank encountered
            else if(state == OUT){
                putchar(c);
                state = IN;
            }
        }
        else{
            // Print all other non-blank characters that are outside the sequence of blanks
            putchar(c);
            state = OUT;
        }
    }

    return 0;
}
