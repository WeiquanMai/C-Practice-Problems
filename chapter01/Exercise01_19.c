/**
 * @author Weiquan Mai
 * @date February 19, 2026
 * Problem 1.19
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */

 #include <stdio.h>
 void reverse(char s[]);
 int strLength(char a[]);
 int getLine(char a[]);

 void reverse(char s[]){
    int j = strLength(s) - 1;

    for(int i = 0; i < j; i++){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
 }

 int strLength(char a[]){
    int i = 0;

    while(a[i] != '\0'){
        i++;
    }

    return i;
 }

 int getLine(char a[]){
    int i = 0;
    int c;

    while(1){
        c = getchar();
        if(c == EOF || c == '\n') break;
        a[i] = c;
        i++;
    }
    a[i] = '\0';
    if(c == EOF && i == 0){
        return EOF;
    }
    return 0;
 }

 int main(){
    char this_line[1000];

    while(1){
        if(getLine(this_line) == EOF) break;
        reverse(this_line);
        printf("%s\n", this_line);
    }

    return 0;
 }
