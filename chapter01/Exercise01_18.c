/**
 * @author Weiquan Mai
 * @date March 25, 2026
 * Problem 1.18
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 */

 #include <stdio.h>

 void remove_trail_spaces(char *str, int i){
    int j = i - 1;
    // Walk the iterator backwards if it encounters a blank or a tab
    while((*(str + j) == ' ' || *(str + j) == '\t')){
        j--;
    }

    // Cap end of string with null character
    *(str + j + 1) = '\0';

    // Print string if it's not empty
    if(j >= 0){
        printf("%s\n", str);
    }
 }

 int main(){
    int c;
    char *str;
    int i = 0;

    while((c = getchar()) != EOF){
        // If c is not newline, add c to string
        if(c != '\n'){
            *(str + i) = c;
            i++;
        }
        // Elses c is new line, and remove trailing spaces
        else{
            remove_trail_spaces(str, i);
            i = 0;
        }
    }
    // Remove trailing spaces from last line
    remove_trail_sapces(str, i);

    return 0;
 }
