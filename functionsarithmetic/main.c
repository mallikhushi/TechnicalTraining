#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    if (b == 0)
        return 0;
    return (float)a / b;
}

int modulus(int a, int b)
{
    if (b == 0)
        return 0;
    return a % b;
}

int main()
{
    int x, y, z;
    float d;
    scanf("%d%d", &x, &y);

    z = addition(x, y);
    printf("Addition = %d\n", z);

    z = subtraction(x, y);
    printf("Subtraction = %d\n", z);

    z = multiplication(x, y);
    printf("Multiplication = %d\n", z);

    d = division(x, y);
    printf("Division = %.2f\n", d);

    z = modulus(x, y);
    printf("Modulus = %d\n", z);

    return 0;
}
