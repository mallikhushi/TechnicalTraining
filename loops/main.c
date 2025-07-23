#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int n,i=1;
    scanf("%d",&n);*/


   //while
   /* while(i<=n)
    {
        printf("\n abc");
        i++;
    }*/

    //do while

   /* do
    {
        printf("\n abc");
        i++;
    }
    while(i<=n);

     */

     // for

    /* for(i=1;i<=n;i++)
     {
         printf("\n ");
     }
     */





   /* int i, n;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %d natural numbers are:\n", n);

    for(i = 1; i <= n; i++)
        {
        printf("%d ", i);
       }   */


       int i, n;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %d natural numbers are:\n", n);

    for(i = 1; i <= n; i++)
        {
        printf("%d ", 2*i);
       }

    return 0;
}

#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to extract and add digits
    while(n > 0) {
        digit = n % 10;      // Get the last digit
        sum = sum + digit;   // Add to sum
        n = n / 10;          // Remove last digit
    }

    // Output the result
    printf("Sum of d


