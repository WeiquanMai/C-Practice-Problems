/**
 * @author Weiquan Mai
 * @date February 12, 2026
 * Problem 1.8
 * Write a program to count blanks, tabs, and newlines
 */

 #include <stdio.h>
 int main(){
    // Variables
    int c;
    int blanks = 0, tabs = 0, newlines = 0;

    // Keep iterating getchar until EOF
    while((c = getchar()) != EOF){
        // Increment blanks, tab, or newline when encountered
        if(c == ' '){
            blanks++;
        }
        else if(c == '\t'){
            tabs++;
        }
        else if(c == '\n'){
            newlines++;
        }
    }

    // Display result
    printf("Blanks: %d Tabs: %d Newline: %d", blanks, tabs,newlines);

    return 0;
 }
