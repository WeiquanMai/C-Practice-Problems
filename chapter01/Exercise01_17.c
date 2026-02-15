/**
 * @author Weiquan Mai
 * @date February 15, 2026
 * Problem 1.17
 * Write a program to print all input lines that are longer than 80 characters.
 */

 #include <stdio.h>
 #define LIMIT 80
 #define MAXLINE 1000

 int get_line(char line[], int limit);

 int main(){
    // Variables
    int len; // current line length
    char line[MAXLINE];

    while((len = get_line(line, MAXLINE)) > 0){
        // Print line if it's more than 80 characters
        if(len > 80){
            printf("%s", line);
        }
    }

    return 0;
 }

 // getline: read a line into s, return length
int get_line(char s[], int lim){
    int c, i;

    for(i = 0; (c = getchar()) != EOF && c != '\n'; i++){
        if(i < lim - 1){
            s[i] = c;
        }
    }
    if(c == '\n'){
        if(i < lim - 1){
            s[i] = c;
        }
        i++;
    }
    if(i < lim){
        s[i] = '\0';
    }
    else{
        s[lim - 1] = '\0';
    }
    return i;
}
