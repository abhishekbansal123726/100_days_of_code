his is my day 12 progress for 100 days of code challenge 

Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

//Solution : This can be done using else if functions easily 

#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
