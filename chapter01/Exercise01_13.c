/**
 * @author Weiquan Mai
 * @date February 13, 2026
 * Problem 1.13
 * Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>

int main(){
    // Variables
    int c;
    int wordCounter = 0;
    int arrayCounter = 0;
    int counter = 0;
    int length[1000];

    // Keep reading file until EOF
    while((c = getchar()) != EOF){
        // Get length of each word
        while(c != ' ' && c != '\t' && c != '\n'){
            wordCounter++;
            c = getchar();
        }

        // Add length of word to array
        length[arrayCounter] = wordCounter;
        arrayCounter++;

        // Reset wordCounter for next word
        wordCounter = 0;
    }

    // Iterate through array and represent length of word as a histogram
    for(int i = 0; i <= arrayCounter; i++){
        counter = 0;

        for(int j = 0; j < length[i]; j++){
            putchar('|');
        }
        putchar('\n');
    }
}
