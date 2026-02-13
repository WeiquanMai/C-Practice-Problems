/**
 * @author Weiquan Mai
 * @date February 13, 2026
 * Problem 1.9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */

 #include <stdio.h>

 int main(){
    // Variables
    int c, lastC;
    
    // Read from input
    while((c = getchar()) != EOF){
        // Convert one or more blanks to a single blank
        if(c == ' '){
            while((c = getchar()) == ' '){
            }
            putchar(' ');
        }
        // Print everything else as is
        putchar(c);
    }

    return 0;
 }
