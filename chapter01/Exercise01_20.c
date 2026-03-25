/**
 * @author Weiquan Mai
 * @date March 25, 2026
 * Problem 1.20
 * Write a program detab that replaces tabs in the input with the proper number of blanks
 * to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter?
 */

 // n should be a symbolic parameter so that we only have to change the value of n once to change it everywhere in the program

 #include <stdio.h>
 #define TABSPACE 8

 int main(){

    int c, pos;
    pos = 0;

    while((c = getchar()) != EOF){
        // If c is tab, calculate space to next tab and output number of blanks
        if(c == '\t'){
            int numspace = TABSPACE - (pos % TABSPACE);
            for(int i = 0; i < numspace; i++){
                putchar(' ');
            }
            pos += numspace;
        }

        // If c is new line, reset position to 0
        else if(c == '\n'){
            putchar(c);
            pos = 0;
        }
        // If c is any other character, output c and increment position
        else{
            putchar(c);
            pos++;
        }
    }
 }
