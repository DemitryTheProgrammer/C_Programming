/*
    Introduction to Variables in C
*/

// Preprocessor Directive
// stdio - standard input output
#include <stdio.h>

// Create main function
int main() {
    // Create a variable
    int first_number;

    first_number = 100;
    
    // Create and initialize variable
    int second_number = -19;

    //Print the value of the variable
    // "%d" shorter way to write the variable
    printf("The first number is %d\n",first_number);
    printf("The second number is %d\n",second_number);
    
    // Adding two variables (Creating a sum)
    int number1 = 2;
    int number2 = 4;
    int sumNum = number1 + number2;
    printf("The sum of these two numbers is %d\n", sumNum);


    return 0;
}