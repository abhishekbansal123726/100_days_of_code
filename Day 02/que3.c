// This is my day 2 of 100 days of code challenge 

Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
 
//Solution : For this int and print funtion  and some mathematical functions are to be used 

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    // Taking the input values for the length and breadth from the user
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    // Calculating area and lenght for the rectangle 
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Giving the output 
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}

-------------------
