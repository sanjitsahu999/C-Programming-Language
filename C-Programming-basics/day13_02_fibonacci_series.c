#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0 || n > 46) {
        printf("Enter a number between 1 and 46.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d ", first);

            next = first + second;
            first = second;
            second = next;
        }
    }

    return 0;
}
