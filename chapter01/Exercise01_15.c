/**
 * @author Weiquan Mai
 * @date February 15, 2026
 * Problem 1.15
 * Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
 */

 #include <stdio.h>
 float fahrToCelsius(float fahr);

 int main(){
    for(float fahr = 0; fahr <= 300; fahr += 20){
        printf("%3.1f %6.1f\n", fahr, fahrToCelsius(fahr));
    }

    return 0;
 }

 float fahrToCelsius(float fahr){
    return (5.0 / 9.0) * (fahr - 32.0);
 }
