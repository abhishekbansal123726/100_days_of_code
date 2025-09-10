Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

//Solution : take a number (1–7) as input, then use switch-case to map each number to its corresponding weekday, and print Invalid Input if it’s outside 1–7.

#include <stdio.h>

int main() {
    int day;

    // Input a number
    scanf("%d", &day);

    // Switch-case for days
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;
}
