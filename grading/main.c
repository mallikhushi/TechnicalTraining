#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m,p,c,total;
    float avg;

    printf("Enter the math mark:");
    scanf("%d",&m);

    printf("Enter the phy mark:");
    scanf("%d",&p);

    printf("Enter the chem mark:");
    scanf("%d",&c);

    total=m+p+c;
    avg=m+p+c/3.0;

    printf("The total marks is:%d\n",total);
    printf("The avg marks is:%.2f\n",avg);


    if (avg >= 91 && avg <= 100)
        printf("Grade: A+\n");
    else if(avg>=81 && avg<=90)
        printf("Grade: A\n");
    else if(avg>=71 && avg<=80)
        printf("Grade: B+\n");
    else if(avg>=61 && avg<=70)
        printf("Grade: B\n");
    else if(avg>=51 && avg<=60)
        printf("Grade: C\n");
    else if(avg>=41 && avg<=50)
        printf("Grade: D\n");
    else if(avg>=35 && avg<=40)
        printf("Grade: E\n");
    else
        printf("Fail");
    return 0;



}
