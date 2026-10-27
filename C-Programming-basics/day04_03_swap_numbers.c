#include <stdio.h>

int main() {
    int first, second, temp;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    printf("Before Swap: %d %d\n", first, second);

    temp = first;
    first = second;
    second = temp;

    printf("After Swap: %d %d\n", first, second);

    return 0;
}
