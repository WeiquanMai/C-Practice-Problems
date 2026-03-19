/**
 * @author Weiquan Mai
 * @date March 19, 2026
 * Problem 1.13
 * Write a program to print a histogram of the lengths of words in its input.
 It is easy to draw the histogram with the bars horizontal;
 a vertical orientation is more challenging.
 */
 #include <stdio.h>
 #define IN 1
 #define OUT 0

 int main(){
    // Variables
    int c, state, length;
    state = OUT;
    length = 0;

    // Run until end of file
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            // If we transition from outside of a word to inside a word
            if(state == IN){
                // Print histogram representing length of word
                for(int i = 0; i < length; i++){
                    putchar('|');
                }

                // Move to new line and reset length
                putchar('\n');
                length = 0;
                state = OUT;
            }
        }
        // Else count number of characters in word
        else{
            state = IN;
            length++;
        }
    }

    return 0;
 }
