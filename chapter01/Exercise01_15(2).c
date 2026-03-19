/**
 * @author Weiquan Mai
 * @date March 19, 2026
 * Problem 1.15
 * Rewrite the temperature conversion program of Section 1.2
 * to use a function for conversion.
 */
 
 #include <stdio.h>

 float fahrToCelsius(float fahr){
    return (5.0/ 9.0) * (fahr - 32.0);
 }

 int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper){
        celsius = fahrToCelsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
 }
