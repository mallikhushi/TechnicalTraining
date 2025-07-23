#include <stdio.h>

int main()
{
    struct student
    {
        char name[50];
        int m1, m2, m3;
        float avg;
    } s;

    printf("Enter the student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter the marks for the three subjects: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    s.avg = (float)(s.m1 + s.m2 + s.m3) / 3.0;

    printf("\nThe student name is: %s\n", s.name);
    printf("The marks of three subjects are: %d, %d, %d\n", s.m1, s.m2, s.m3);
    printf("The average marks is: %f\n", s.avg);

    return 0;
}

