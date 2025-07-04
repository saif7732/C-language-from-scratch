#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


// Function declarations
void basic_operations();
void scientific_operations();
long long factorial(int n);

int main() {
    int choice;

    while (1) {
        printf("\n========== Advanced Calculator ==========\n");
        printf("1. Basic Operations (+, -, *, /, %%)\n");
        printf("2. Scientific Operations (sqrt, pow, sin, cos, tan, log, factorial)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basic_operations();
                break;
            case 2:
                scientific_operations();
                break;
            case 0:
                printf("Exiting calculator. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

// Handles +, -, *, /, %
void basic_operations() {
    double a, b;
    char op;

    printf("\nEnter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result: %.2lf\n", a + b);
            break;
        case '-':
            printf("Result: %.2lf\n", a - b);
            break;
        case '*':
            printf("Result: %.2lf\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Error: Division by zero.\n");
            else
                printf("Result: %.2lf\n", a / b);
            break;
        case '%':
            if ((int)b == 0)
                printf("Error: Division by zero.\n");
            else
                printf("Result: %d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator.\n");
    }
}

// Handles sqrt, pow, sin, cos, tan, log, factorial
void scientific_operations() {
    int choice;
    double x, y;
    int n;

    printf("\n--- Scientific Operations ---\n");
    printf("1. Power (x^y)\n");
    printf("2. Square Root (√x)\n");
    printf("3. Log (base e)\n");
    printf("4. Sine (sin x in degrees)\n");
    printf("5. Cosine (cos x in degrees)\n");
    printf("6. Tangent (tan x in degrees)\n");
    printf("7. Factorial (n!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2lf\n", pow(x, y));
            break;
        case 2:
            printf("Enter number: ");
            scanf("%lf", &x);
            if (x < 0)
                printf("Error: Negative number.\n");
            else
                printf("Result: %.2lf\n", sqrt(x));
            break;
        case 3:
            printf("Enter number: ");
            scanf("%lf", &x);
            if (x <= 0)
                printf("Error: Log undefined for non-positive numbers.\n");
            else
                printf("Result: %.2lf\n", log(x));
            break;
        case 4:
            printf("Enter angle in degrees: ");
            scanf("%lf", &x);
            printf("Result: %.4lf\n", sin(x * M_PI / 180));
            break;
        case 5:
            printf("Enter angle in degrees: ");
            scanf("%lf", &x);
            printf("Result: %.4lf\n", cos(x * M_PI / 180));
            break;
        case 6:
            printf("Enter angle in degrees: ");
            scanf("%lf", &x);
            printf("Result: %.4lf\n", tan(x * M_PI / 180));
            break;
        case 7:
            printf("Enter an integer: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Error: Factorial of negative number is undefined.\n");
            else
                printf("Result: %lld\n", factorial(n));
            break;
        default:
            printf("Invalid choice.\n");
    }
}

// Factorial using loop
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}
