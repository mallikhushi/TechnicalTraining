#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        float marks1, marks2, marks3;
        float avg;
    } s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter marks for 3 subjects:\n");
    scanf("%f%f%f", &s.marks1, &s.marks2, &s.marks3);


    s.avg = (s.marks1 + s.marks2 + s.marks3) / 3;


    printf("\nStudent Name: %s\n", s.name);
    printf("Marks: %.2f, %.2f, %.2f\n", s.marks1, s.marks2, s.marks3);
    printf("Average Marks: %.2f\n", s.av
