#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice, n;
    double result, num;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add
                printf("Enter number of elements to add: ");
                scanf("%d", &n);
                result = 0;
                for (int i = 0; i < n; i++) {
                    printf("Enter number %d: ", i + 1);
                    scanf("%lf", &num);
                    result += num;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 2: // Subtract
                printf("Enter starting number: ");
                scanf("%lf", &result);
                printf("Enter number of elements to subtract: ");
                scanf("%d", &n);
                for (int i = 1; i < n; i++) {
                    printf("Enter number %d to subtract: ", i + 1);
                    scanf("%lf", &num);
                    result -= num;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 3: // Multiply
                printf("Enter number of elements to multiply: ");
                scanf("%d", &n);
                result = 1;
                for (int i = 0; i < n; i++) {
                    printf("Enter number %d: ", i + 1);
                    scanf("%lf", &num);
                    result *= num;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 4: // Divide
                printf("Enter dividend: ");
                scanf("%lf", &result);
                printf("Enter divisor: ");
                scanf("%lf", &num);
                if (num != 0) {
                    result /= num;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case 5: // Exit
                printf("Exiting the calculator...\n");
                exit(0);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

    } while (1);

    return 0;
}
