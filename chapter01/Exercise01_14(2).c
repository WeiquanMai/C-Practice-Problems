/**
 * @author Weiquan Mai
 * @date March 19, 2026
 * Problem 1.14
 * Write a program to print a histogram of the frequencies of 
 * different characters in its input.
 */

 #include <stdio.h>
 #define ASCII_SIZE 128

 int main(){
    // Variables
    int c;
    int array[ASCII_SIZE];

    // Initialize array
    for(int i = 0; i < ASCII_SIZE; i++){
        array[i] = 0;
    }

    // Iterate until end of file
    while((c = getchar()) != EOF){
        array[c]++;
    }

    // Print histogram if character appears in input
    for(int i = 0; i < ASCII_SIZE; i++){
        if(array[i] > 0){
            for(int j = 0; j < array[i]; j++){
                putchar('|');
            }
        }
    }

    return 0;
 }
