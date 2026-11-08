#include <stdio.h>

int main() {
    int a, b, i, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers.\n");
    } else {
        for (i = 1; i <= a && i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }

        printf("GCD = %d\n", gcd);
    }

    return 0;
}
