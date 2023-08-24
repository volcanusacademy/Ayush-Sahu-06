#include <stdio.h>

int main() {
    float basic_salary, ta, pf, da, gs, ns;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate Travel Allowance (TA)
    ta = 0.10 * basic_salary;

    // Calculate Provident Fund (PF)
    pf = 0.078 * basic_salary;

    // Calculate Dearness Allowance (DA)
    da = 500;

    // Calculate Gross Salary (GS)
    gs = basic_salary + da + ta;

    // Calculate Net Salary (NS)
    ns = gs - pf;

    printf("Travel Allowance (TA): %.2f\n", ta);
    printf("Provident Fund (PF): %.2f\n", pf);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("Gross Salary (GS): %.2f\n", gs);
    printf("Net Salary (NS): %.2f\n", ns);

    return 0;
}
