#include <stdio.h>

int main() {
    double num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform addition
    result = num1 + num2;

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}
