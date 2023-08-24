#include <stdio.h>

int main() {
    int lastMonthUnits, currentMonthUnits;
    float billAmount = 0;

    printf("Enter last month's units: ");
    scanf("%d", &lastMonthUnits);

    printf("Enter current month's units: ");
    scanf("%d", &currentMonthUnits);

    int unitsConsumed = currentMonthUnits - lastMonthUnits;

    if (unitsConsumed <= 100) {
        billAmount = unitsConsumed * 2;
    } else if (unitsConsumed <= 200) {
        billAmount = 100 * 2 + (unitsConsumed - 100) * 3;
    } else if (unitsConsumed <= 300) {
        billAmount = 100 * 2 + 100 * 3 + (unitsConsumed - 200) * 4;
    } else {
        billAmount = 100 * 2 + 100 * 3 + 100 * 4 + (unitsConsumed - 300) * 5;
    }

    printf("Bill Amount: %.2f\n", billAmount);

    return 0;
}
