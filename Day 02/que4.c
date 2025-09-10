Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

//Solution : here float function to be used as it is related to circle and the value of PI is predefined by me.

#include <stdio.h>
#define PI 3.14   // Giving the value of pi for calculating 

int main() {
    float radius, area, circumference;

    //  Taking the value of radius from user 
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying the output 
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
