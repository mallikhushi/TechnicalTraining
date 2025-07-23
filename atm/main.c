#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,np,cp,nb;
    int p=1234;
    int cb=1000;

    printf("Enter your pin :");
    scanf("%d",&p);
    if(p!=1234)
        printf("Invalid pin");
    else
    {

    printf("Choose any one of the following operation:");
    printf("\n 1.Deposit \n 2.Withdraw \n 3.Balance enquiry \n 4.Pin change");
    printf("\nEnter your choice:");
    scanf("%d",&n);

    switch(n){
    case 1:

        printf("Enter the money you want to deposit:");
        scanf("%d",&m);
        printf("\nThe money deposited is:%d",m);
        nb=cb+m;
        printf("\nThe current balance is:%d",nb);
        break;

    case 2:
        printf("Enter the money to withdraw:");
        scanf("%d",&m);
        if(m>1000)
            printf("insufficient balance");
        else
        {
             printf("\nThe money withdrawn is:%d",m);
             nb=cb-m;
             printf("\nThe current balance is:%d",nb);

        }


        break;

    case 3:
        printf("The bank balance is:%d",cb);
        break;

    case 4:

        printf("Enter your current pin\n:");
        scanf("%d",&p);
        if(p!=1234)
            printf("Invalid pin");
        else
        {
            printf("Enter the new pin\n:");
            scanf("%d",&np);
            printf("Confirm the pin:");
            scanf("%d",&cp);



        if(np==cp)
            printf("The pin is successfully changed");
        else
            printf("Pin doesn't match");
        break;
        }
    }
    }
    return 0;
}
