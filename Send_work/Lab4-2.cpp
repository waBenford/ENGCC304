#include <stdio.h>

int main() {
    char   ID[11];   // 10 ตัวอักษร + '\0'
    int    hours;
    double rate, salary;

    printf("Input the Employees ID(Max. 10 chars):\n");
    scanf("%10s", ID);

    printf("Input the working hrs:\n");
    scanf("%d", &hours);

    printf("Salary amount/hr:\n");
    scanf("%lf", &rate);

    salary = hours * rate;

    printf("\n");

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", ID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
