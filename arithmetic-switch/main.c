#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    float c;

    printf("Choose any one of the following");
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
    printf("\nEnter your choice:");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("Enter the numbers:");
            scanf("%d%d",&a,&b);
            c=a+b;
            printf("\n Addition:%f",c);
            break;

        case 2:
            printf("Enter the numbers:");
            scanf("%d%d",&a,&b);
            c=a-b;
            printf("\n Subtraction:%f",c);
            break;


        case 3:
            printf("Enter the numbers:");
            scanf("%d%d",&a,&b);
            c=a*b;
            printf("\n Multiplication:%f",c);
            break;


        case 4:
            printf("Enter the numbers:");
            scanf("%d%d",&a,&b);
            c=a/b;
            printf("\n Division:%f",c);
            break;

        default:
            printf("Invalid choice");
            break;


    }
    return 0;
}
