/**
 * @author Weiquan Mai
 * @date February 6, 2026
 * Problem 1.6
 * Verify that the expression getchar() != EOF is 0 or 1
 */

 #include <stdio.h>

 int main(){
    int c;

    while(c = getchar() != EOF){
        printf("%d", c);
    }

    printf("End of file: %d", c);

    return 0;
 }
