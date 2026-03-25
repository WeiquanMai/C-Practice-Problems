/**
 * @author Weiquan Mai
 * @date March 25, 2026
 * Problem 1.22
 * Write a program to "fold" long input linens into two or more shorter lines
 * after the last non-blank character that occurs before the n-th column of input.
 * Make sure your program does something very intelligent with very long lines,
 * and if there are no blanks or tabs before the specified column.
 */
 #include <stdio.h>
 #define FOLD_LENGTH 10
 #define MAXLINE 100
 void fold_line(char line[], int length);

 int main(){
    int c;
    int length = 0;
    char line[MAXLINE];

    while((c = getchar()) != EOF){
        // If c is not a new line, add to array if size permits
        if(c != '\n'){
            if(length == MAXLINE - 1){
                line[length] = '\0';
                fold_line(line, length);
                length = 0;
            }
            line[length] = c;
            length++;
        }
        // Else c is new line, so we should call fold_line
        else{
            line[length] = '\0';
            fold_line(line, length);
            length = 0;
        }
    }

    return 0;
 }
 
 // Folds lines along a pre-determined FOLD_LENGTH
 void fold_line(char line[], int length){
    // If length is less than FOLD_LENGTH, simply print the line
    if(length <= FOLD_LENGTH){
        printf("%s\n", &line[0]);
        return;
    }
    // Else length > FOLD_LENGTH

    int index = 0;

    while(index < length){

        // Determine potential target to truncate line
        int target = index + FOLD_LENGTH;
        if(target > length){
            target = length;
        }

        int space_found = 0;

        // Iterate down from target and look for blank
        for(int i = target - 1; i > index; i--){
            // If we find a blank, print from index to blank
            if(line[i] == ' ' || line[i] == '\t'){
                for(int j = index; j < i; j++){
                    putchar(line[j]);
                }
                putchar('\n');
                index = i + 1;
                space_found = 1;
                break;
            }
        }
        // Else we don't find a blank, so we should just print and truncate the word
        if(space_found == 0){
            for(int j = index; j < target; j++){
                putchar(line[j]);
            }
            putchar('\n');
            index = target;
        }
    }
 }
