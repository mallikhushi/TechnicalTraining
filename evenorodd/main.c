#include <stdio.h>
#include <stdlib.h>

void EvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main()
{
    int x;
    scanf("%d", &x);
    EvenOdd(x);
    return 0;
}
