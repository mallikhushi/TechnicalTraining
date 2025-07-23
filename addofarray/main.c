#include <stdio.h>

int AddofArray(int *x, int *y, int n) {
    int add = 0;
    for (int i = 0; i < n; i++) {
        add +
int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    int sum = AddofArray(a, b, n);
    printf("%d\n", sum);

    return 0;
}
