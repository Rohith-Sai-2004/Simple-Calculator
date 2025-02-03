#include <stdio.h>

void add(double a, double b) {
    printf("Result: %.2lf\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2lf\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2lf\n", a * b);
}

void divide(double a, double b) {
    if (b != 0)
        printf("Result: %.2lf\n", a / b);
    else
        printf("Error! Division by zero.\n");
}

int main() {
    double num1, num2;
    char operator;

    while (1) {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);  // space before %c to consume any trailing newline

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                add(num1, num2);
                break;
            case '-':
                subtract(num1, num2);
                break;
            case '*':
                multiply(num1, num2);
                break;
            case '/':
                divide(num1, num2);
                break;
            default:
                printf("Invalid operator!\n");
        }

        char choice;
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);  // space before %c to consume any trailing newline

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    return 0;
}
