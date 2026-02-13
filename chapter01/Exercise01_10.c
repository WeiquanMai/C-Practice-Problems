/**
 * @author Weiquan Mai
 * @date February 13, 2026
 * Problem 1.10
 * Write a program to copy its input to its output, replacing each tab by \t,
 * each backspace by \b, and each backslash by \\. 
 * This makes tabs and backspaces visible in an unambiguous way.
 */

 #include <stdio.h>

 int main(){
    // Variable
    int c;

    // Read from input
    while((c = getchar()) != EOF){
        // Replace each tab by \t, each backspace by \b, and each backslash by \\.
        if(c == '\t'){
            printf("\\t");
        }
        else if(c == '\b'){
            printf("\\b");
        }
        else if(c == '\\'){
            printf("\\\\");
        }
        // Print everything else as is
        else{
            putchar(c);
        }
    }
    return 0;
 }
