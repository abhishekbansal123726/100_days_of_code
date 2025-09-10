
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

//Solution : in this float function and the formula F= (9/5 * C)  + 32  is used to convert from celsius to farenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Printing the output
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}
