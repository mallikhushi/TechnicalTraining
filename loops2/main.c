#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int s,e;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        if(s%2==0)
        printf("%d\t",e);

        e--;
    }*/


    /*int s,e,sum=0;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        sum=sum+s;
        s++;
        printf("%d",sum);
    }*/

    int n,digit,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        sum=sum*10+digit;
        //sum=sum+digit;
        n=n/10;

        printf("%d",sum);
    }
    return 0;
}
