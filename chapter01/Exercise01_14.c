/**
 * @author Weiquan Mai
 * @date February 15, 2026
 * Problem 1.14
 * Write a program to print a histogram of the frequencies of different characters in its input.
 */
#include <stdio.h>
#define ASCII_SIZE 128

int main(){
    // Variables
    int c;
    int array[ASCII_SIZE] = {0};

    // Keep looping until end of array
    while((c = getchar()) != EOF){
        // Add input into histogram array
        array[c]++;
    }

    // Display histogram
    for(int i = 0; i < 128; i++){
        if(array[i] > 0){
            for(int j = 0; j < array[i]; j++){
                putchar('|');
            }
            putchar('\n');
        }

    }

    return 0;
}
