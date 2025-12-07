#include <stdio.h>

int main ()
{
    char gender, fname[20];
    float w;

    printf("\nEnter the name of the student: ");
    fgets(fname, 20, stdin);
    printf("Enter the Gender of the Student: ");
    gender = getchar();
    

    printf("\nStudent's Information\n");
    printf("Student's Name: ");
    puts(fname);
    printf("Students Gender: ");
    putchar(gender);

    printf("\nEnter Weight of the Student: ");
    scanf("%f", &w);
    printf("\nStudent's Weight: %f\n",w);
    return 0;
}