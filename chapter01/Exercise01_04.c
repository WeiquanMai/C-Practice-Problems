 /**
  * @author Weiquan Mai
  * @date February 5, 2026
  * Problem 1.4
  * Write a program to print the corresponding Celsius to Fahrenheit table.
  */

  #include <stdio.h>

  int main(){
        // Variables
        float fahr, celsius;
        float lower, upper, step;
        
        lower = -17.8;
        upper = 148.9;
        step = 11.1;

        celsius = lower;

        // Print heading
        printf("Celsius Fahrenheit\n");

        for(celsius = lower; celsius <= upper; celsius += step){
            fahr = (celsius * (9.0 / 5.0)) + 32;
            printf("%7.1f %10.1f\n", celsius, fahr);
        }

        return 0;
  }
