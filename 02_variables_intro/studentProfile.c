#include <stdio.h>

int main() {
    int course_ID = 2271;
    int student_ID = 10234;
    int course_ID2 = student_ID - course_ID;

    printf("Name: John Doe\n");
    printf("ID: %d\n", student_ID);
    printf("Course ID: %d\n", course_ID);
    printf("Student ID - Course ID is: %d\n", course_ID2);

}