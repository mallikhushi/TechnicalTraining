#include <stdio.h>
#include <ctype.h>
#include <string.h>


int isPalindrome(char word[])
{
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{
    char s[200], word[100];
    int i = 0, w = 0, count = 0;

    scanf("%[^\n]", s);

    while (1)
    {
        if (isalpha(s[i]))
        {
            word[w++] = s[i];
        }
        else if (w > 0)
        {
            word[w] = '\0';
            if (isPalindrome(word))
            {
                printf("Palindrome word: %s\n", word);
                count++;
            }
            w = 0;
        }

        if (s[i] == '\0') break;
        i++;
    }

    printf("Total palindrome words: %d\n", count);
    return 0;
}


/*#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindromeNumber(int num)
{
    int rev = 0, temp = num;
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return rev == num;
}

int main()
{
    char s[200];
    int i = 0, num = 0, count = 0, inNumber = 0;

    scanf("%[^\n]", s);

    while (1)
    {
        if (isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');
            inNumber = 1;
        }
        else if (inNumber)
        {
            if (isPalindromeNumber(num))
            {
                printf("Palindrome number: %d\n", num);
                count++;
            }
            num = 0;
            inNumber = 0;
        }

        if (s[i] == '\0') break;
        i++;
    }

    printf("Total palindrome numbers: %d\n", count);
    return 0;
}
*/
