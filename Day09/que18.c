Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

//Solution : using if else function if percentage ≥ 90 --> Grade A , if percentage ≥ 80 --> Grade B , if Percentage ≥ Grade C , If percentage ≥ Grade D  , if less than  60 then F 

#include <stdio.h>

int main() {
    int percentage;

    // Input percentage
    printf("Enter percentage: ");
    scanf("%d", &percentage);

    // Assigning  grades based on percentage
    if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}
