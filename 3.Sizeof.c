#include <stdio.h>

int main ()
{
    int roll_no = 259;
    char gender = 'M';
    float weight = 65.9;

    printf("Student's Roll no: %d\n", roll_no);
    printf("Size of int: %d\n", sizeof(roll_no));
    printf("Student's Gender: %c\n", gender);
    printf("Size of char: %d\n", sizeof(gender));
    printf("Student's Weight: %f\n", weight);
    printf("Size of float: %d\n", sizeof(weight));
    return 0;
}