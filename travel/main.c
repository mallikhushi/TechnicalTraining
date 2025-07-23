#include <stdio.h>
#include <stdlib.h>

int main()
{
    int source;
    int destination;
    int adults;
    int children;
    int rt;
    printf("Enter the source stage:\n");
    scanf("%d",&source);
    printf("Enter the destination stage:\n");
    scanf("%d",&destination);

    int result_stage;
    result_stage=destination-source;
    printf("The result stage is:%d\n",result_stage);

    printf("Enter the number of adults:");
    scanf("%d",&adults);

    printf("Enter the number of children:");
    scanf("%d",&children);

    int ticket=result_stage*((adults*10)+(children*5));
    printf("The ticket cost is:%d\n",ticket);


    rt=(ticket/100)*5;
    int tp=(ticket+rt);
    printf("The roadtax is:%d\n",rt);
    printf("The totalprice is:%d\n",tp);
    return 0;
}
