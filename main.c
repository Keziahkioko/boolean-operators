#include <stdio.h>
#include <stdbool.h> // For using bool type

int main() {
    // Declare variables
    bool a, b;
    bool result;

    // Get user input
    printf("Enter 1 for true or 0 for false for the first boolean variable (a): ");
    scanf("%d", &a);
    printf("Enter 1 for true or 0 for false for the second boolean variable (b): ");
    scanf("%d", &b);

    // Perform boolean operations
    result = a && b;
    printf("a && b = %d\n", result);

    result = a || b;
    printf("a || b = %d\n", result);

    result = !a;
    printf("!a = %d\n", result);

    result = !b;
    printf("!b = %d\n", result);

    return 0;
}
