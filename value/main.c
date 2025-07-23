#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    float b=10.2;
    char c='f';
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);

    printf("\n %d",sizeof(a));  //%d is used here because the value of size should be in integer
    printf("\n %d",sizeof(b));
    printf("\n %d",sizeof(c));
    return 0;
}
