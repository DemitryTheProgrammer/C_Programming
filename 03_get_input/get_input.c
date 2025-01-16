/*
    Getting the input from the User
*/

#include <stdio.h>

int main () {
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;

    // Prompt
    puts("How many sides are there on the square? ");

    // Get Input
    // & = address operator
    scanf("%d", &square_side);

    // Do the math
    square_perimeter = square_side * 4;

    //Create the output
    printf("The perimeter of a square with %d sides is %d\n", square_side, square_perimeter);

    return 0;
}