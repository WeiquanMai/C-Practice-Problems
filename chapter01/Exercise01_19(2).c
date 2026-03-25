/**
 * @author Weiquan Mai
 * @date March 25, 2026
 * Problem 1.19
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */

 #include <stdio.h>

 // Reverse characters of input
 void reverse(char *str, int i){
    // Swap characters until they meet in the middle
    for(int j = 0; j < i; j++, i--){
        char temp = j;
        *(str + j) = *(str + i);
        *(str + i) = temp;
    }
 }

 int main(){
    int c;
    char *str;
    int i = 0;

    while((c = getchar()) != EOF){
        // Capture c in string if c is not new line
        if(c != '\n'){
            *(str + i) = c;
            i++;
        }
        // Else pass c to reverse function
        else{
            *(str + i) = '\0';
            reverse(str, i);
            printf("%s\n", str);
            i = 0;
        }
    }

    // Reverse remaining line if it has input but no new line character
    if(i > 0){
        *(str + i) = '\0';
        reverse(str, i);
        printf("%s", str);
    }

    return 0;
 }
