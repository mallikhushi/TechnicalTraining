#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int n;
    scanf("%d",&n);
    if(n>0)
    {
       printf("Given number is positive");
    }

    return 0;*/

   /* int n;
    scanf("%d",&n);

    if ((n & 1) == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;*/

    char a;
    printf("Enter the the letter:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("The character is a vowel",a);

    }
    else{

        printf("The character is a consonant",a);

    }
    return 0;
}





#include <stdio.h>

int main() {
    int m, p, c, total;
    float avg;

    printf("Enter marks in Maths: ");
    scanf("%d", &m);
    printf("Enter marks in Physics: ");
    scanf("%d", &p);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &c);

    total = m + p + c;
    avg = total / 3.0;  // Float division to get accurate average

    printf("Total Marks = %d\n", total);
    printf("Average = %.2f\n", avg);

    // Grade based on average
    if (avg >= 90 && avg <= 100)
        printf("Grade: A\n");
    else if (avg >= 80)
        printf("Grade: B\n");
    else if (avg >= 70)
        printf("Grade: C\n");
    else if (avg >= 60)
        printf("Grade:

