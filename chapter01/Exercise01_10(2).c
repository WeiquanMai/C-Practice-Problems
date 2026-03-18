/**
    @author Weiquan Mai
    @date March 18, 2026
    Problem 1.10
    Write a progrma to copy its input to its output,
    replacing each tab by \t,
    each backspace by \b,
    and each backslash by \\.
    This makes tabs and backspaces visible in an unambiguous way.
 */

 #include <stdio.h>

 int main(){
    int c;

    while((c = getchar()) != EOF){
        // Replace tab by \t
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        // replace backspace by \b
        else if(c == '\b'){
            putchar('\\');
            putchar('b');
        }
        // Replace backslash
        else if( c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else{
            putchar(c);
        }
    }

    return 0;
 }
