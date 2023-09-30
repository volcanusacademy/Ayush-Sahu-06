//Print number skipping the multiple of 3C ProgrammingLogical Manipulation
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers (skipping multiples of 3): ");
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
