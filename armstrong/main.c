#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d=0;
    int sum=0;
    int r,x,y;
    scanf("%d",&n);
    x=n;
    y=n;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    while(x>0)
    {
        r=x%10;
        sum=sum+pow(r,d);
        x=x/10;
    }

    if(y==sum)
        printf("ArmStrong");
    else
        printf("Not Arm Strong");
    return 0;
}
