Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

//Solution : the quadratic equation is ax^2 + bx +c = 0 and Discriminant D = b^2-4ac . if D>0 roots are real and different , if D=0 Roots are real and same , if D <0 Roots are complex 

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2.0 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}
