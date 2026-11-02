#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a number (0-20): ");
    scanf("%d", &num);

    if (num < 0 || num > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial = factorial * i;
        }

        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}
