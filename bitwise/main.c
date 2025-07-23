#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*int a=278,b=353;
   printf("%d\n",a&b);
   printf("%d\n",a|b);
   printf("%d\n",a^b);
   printf("%d\n",a>>b);
   printf("%d\n",a<<b);
   return 0; */


   int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number & 1) == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}


