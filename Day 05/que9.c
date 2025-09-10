Q9: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

//Solution : Divide total seconds by 3600 to get hours and Take the remainder, divide by 60 to get minutes.The final remainder is seconds.

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // User giving Input  time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Converting to hours:minutes:seconds
    hours = totalSeconds / 3600;              // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;     // remaining minutes
    seconds = totalSeconds % 60;              // remaining seconds

    // Giving output
    
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
