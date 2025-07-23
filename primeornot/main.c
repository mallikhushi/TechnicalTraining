#include <stdio.h>

void checkPrime(int n)
{
    int i;
    if (n <= 1)
    {
        printf("Not Prime\n");
        return;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not Prime\n");
            return;
        }
    }

    printf("Prime\n");
}

int main()
{
    int x;
    scanf("%d", &x);
    checkPrime(x);
    return 0;
}
