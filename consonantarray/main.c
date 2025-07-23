#include <stdio.h>
#include <ctype.h>

int count(char *s) {
    int i, c = 0;
    for (i = 0; s[i]; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            c++;
    }
    return c;
}

int main() {
    char s[100];
    gets(s, sizeof(s), stdin);
    printf("%d", count(s));
    return 0;
}
