#include <stdio.h>
#include <ctype.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    char s[100];
    int i = 0, sum = 0, num;

    scanf("%[^\n]", s);

    while (s[i] != '\0')
    {
        if (isdigit(s[i]))
        {
            num = 0;

            while (isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            if (isPrime(num))
                sum += num;
        }
        else
        {
            i++;
        }
    }

    printf("%d\n", sum);
    return 0;
}

