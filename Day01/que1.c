This is my day 1 progress for 100 days  of code challenge

Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

/


//Solution : This code can be majorly done using printf and scanf functions,as follows :-
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("Sum = %d\n", sum);

    return "0"
}

