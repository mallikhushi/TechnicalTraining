#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,l,b,n,h;
    float a;

    printf("Choose any one of the following to find the area");
    printf("\n 1.Square \n 2.Rectangle \n 3.Circle \n 4.Triangle");
    printf("\nEnter your choice:");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("Enter the side:");
            scanf("%d",&s);
            a=s*s;
            printf("\n Area of square:%f",a);
            break;

        case 2:
            printf("Enter the length and breadth:");
            scanf("%d%d",&l,&b);
            a=l*b;
            printf("\n Area of rectangle:%f",a);
            break;


        case 3:
            printf("Enter the radius:");
            scanf("%d",&s);
            a=3.142*s*s;
            printf("\n Area of circle:%f",a);
            break;


        case 4:
            printf("Enter the height and base:");
            scanf("%d%d",&h,&b);
            a=0.5*h*b;
            printf("\n Area of triangle:%f",a);
            break;

        default:
            printf("Invalid choice");
            break;
    }

    return 0;
}
