#include <stdio.h>

int main()
{
    struct employee
    {
        char name[50];
        int id;
        float experience;
        char department[50];
    } e;

    printf("Enter the employee name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter the employee ID: ");
    scanf("%d", &e.id);

    printf("Enter the years of experience: ");
    scanf("%f", &e.experience);

    printf("Enter the department: ");
    scanf(" %[^\n]", e.department);

    printf("\nEmployee Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.id);
    printf("Years of Experience: %.2f\n", e.experience);
    printf("Department: %s\n", e.department);

    return 0;
}
