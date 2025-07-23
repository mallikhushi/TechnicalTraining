#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,p,c,total;
    float avg;
    scanf("%d%d%d",&m,&p,&c);
    if(m>35)
    {
        if(p>35)
        {
            if(c>35)
            {
                total=m+p+c;
                avg=total/3;
                printf("result=pass\n");
                printf("total marks=%d\n average marks =%f\n",total,avg);

            }
            else
                printf("failed in chemistry");
        }
        else
            printf("failed in physics");

    }
    else
      printf("failed in maths");



    return 0;
}
