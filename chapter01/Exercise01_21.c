/**
 * @author Weiquan Mai
 * @date March 25, 2026
 * Problem 1.21
 * Write a program entab that replaces strings of blanks by the minimum number of tabs
 * and blanks to achieve the same spacing.
 * Use the same tab stops as for detab.
 * When either a tab or a single blank would suffice to reach a tab stop,
 * which should be given preference?
 */

// A blank should be given preference since it is more likely that the blank is just a normal space between words

 #include <stdio.h>
 #define TABSPACE 8

 int main(){
    int c, pos, numBlank, numTab;
    pos = numBlank = numTab = 0;

    while((c = getchar()) != EOF){
        // If we encounter blank, increment numBlank and counter
        if(c == ' '){
            pos++;
            numBlank++;
            // If we have enough blanks to equal a tab, convert blanks to tab
            if(pos % TABSPACE == 0){
                numBlank = 0;
                numTab++;
            }
        }
        // If we encounter a tab, calculate the jump to next tab
        else if(c == '\t'){
            pos += TABSPACE - (pos % TABSPACE);
            numBlank = 0;
            numTab++;
        }
        // If we enter a newline, reset pos, numBlank, and numTab
        else if(c == '\n'){
            pos = numBlank = numTab = 0;
            putchar(c);
        }
        // If it's not a blank, tab, or new line, then we encounter a character
        else{
            // Print the number of tabs
            while(numTab > 0){
                putchar('\t');
                numTab--;
            }
            // Print the number of blanks
            while(numBlank > 0){
                putchar(' ');
                numBlank--;
            }
            putchar(c);
            pos++;
        }
    }

    return 0;
 }
