#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num2 != 0) {
        printf("Division = %.2f\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
