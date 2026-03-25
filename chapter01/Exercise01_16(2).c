/**
 * @author Weiquan Mai
 * @date March 24, 2026
 * Problem 1.16
 * Revise the main routine of the longest-line program so it will correctly print
 the length of arbitrary long input lines, and as much as possible of the text.
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while((len = getline(line, MAXLINE)) > 0)
        if(len > max){
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%d: %s", max, longest);

    return 0;
}

// getline: read a line into s, return length
// Mostly editing this function for this exercise
int getline(char s[], int lim){
    int c, i, counter;
    i = counter = 0;

    // Iterate until null character is found
    while((c = getchar()) != EOF && c != '\n'){
        if(i < lim - 1){
            s[i] = c;
            i++;
        }
        counter++;
    }

    if(c == '\n'){
        if (i < lim - 1){
            s[i] = c;
            i++;
        }
        counter++;
    }

    s[i] = '\0';

    return counter;
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]){
    int i = 0;

    while((to[i] = from[i]) != '\0'){
        i++;
    }
}
