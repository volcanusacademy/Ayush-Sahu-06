#include <stdio.h>

int main() {
    float last_month_unit, current_month_unit, units_consumed, bill_amount;

    // Accept last month unit and current month unit from user
    printf("Enter last month's unit: ");
    scanf("%f", &last_month_unit);
    printf("Enter current month's unit: ");
    scanf("%f", &current_month_unit);

    // Calculate units consumed
    units_consumed = current_month_unit - last_month_unit;

    // Calculate bill amount based on unit ranges
    if (units_consumed <= 100) {
        bill_amount = units_consumed * 2;
    } else if (units_consumed <= 200) {
        bill_amount = 100 * 2 + (units_consumed - 100) * 3;
    } else if (units_consumed <= 300) {
        bill_amount = 100 * 2 + 100 * 3 + (units_consumed - 200) * 4;
    } else {
        bill_amount = 100 * 2 + 100 * 3 + 100 * 4 + (units_consumed - 300) * 5;
    }

    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Bill Amount: %.2f\n", bill_amount);

    return 0;
}
