#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,t,r;
    int si=(p*t*r)/100;

    printf("Enter the principle amount\n:");
    scanf("%d",&p);

    printf("enter the time\n:");
    scanf("%d",&t);

    printf("Enter the rate of interest\n:");
    scanf("%d",&r);

    printf("The simple interest is:",&si);
