#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (0-20): ");
    scanf("%d", &exponent);

    if (exponent < 0 || exponent > 20) {
        printf("Please enter exponent between 0 and 20.\n");
    } else {
        for (i = 1; i <= exponent; i++) {
            result = result * base;
        }

        printf("Result = %lld\n", result);
    }

    return 0;
}
