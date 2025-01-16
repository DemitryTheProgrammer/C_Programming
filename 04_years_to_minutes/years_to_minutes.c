/*
    Changes years to minutes
*/

#include <stdio.h>

int main() {
    int age = 0;
    int minutes = 0; 

    // Asks the users current age
    puts("Enter your current age in years:");

    // Gets the users current age
    scanf("%d", &age);
    
    // Converts the users age to minutes
    minutes = age * 525600;

    // Prints the age in minutes
    printf("\"%d\" years is \"%d\" minutes.\n", age, minutes);

    return 0;
}