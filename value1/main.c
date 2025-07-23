#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=10.225886824;
    double b=5.253253;
    printf("%.3f\n",a);
    printf("%.3f\n",b);
    printf("\n %d",sizeof(a));  //%d is used here because the value of size should be in integer
    printf("\n %d",sizeof(b));
    return 0;
}
