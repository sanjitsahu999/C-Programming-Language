#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Factors of %d are:\n", num);

        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
