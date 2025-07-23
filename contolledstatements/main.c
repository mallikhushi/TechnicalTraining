#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int n;
    scanf("%d",&n);
    if(n>0)
    {
       printf("Given number is positive");
    }

    return 0;*/

   /* int n;
    scanf("%d",&n);

    if ((n & 1) == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;*/

    char a;
    printf("Enter the the letter:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("The character is a vowel",a);

    }
    else{

        printf("The character is a consonant",a);

    }
    return 0;
}




