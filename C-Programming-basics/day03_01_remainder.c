#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        remainder = num1 % num2;
        printf("Remainder = %d\n", remainder);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
