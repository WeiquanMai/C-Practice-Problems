/**
 * @author Weiquan Mai
 * @date February 13, 2026
 * Problem 1.12
 * Write a program that prints its input one word per line.
 */

 #include <stdio.h>

 int main(){
    // Variables
    int c;

    // Keep running until end of file
    while((c = getchar()) != EOF){
        // If we're outside of a word, print a new line
        if(c == ' ' || c == '\n' || c == '\t'){
            putchar('\n');
        }
        // Else print the character
        else{
            putchar(c);
        }
    }
    
    return 0;
 }
