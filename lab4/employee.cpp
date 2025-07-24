#include <stdio.h>

int main() {
    int numbers;
    int hrs;
    float salary;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%d", &numbers);
    printf("Input the working hrs: \n");
    scanf("%d", &hrs);
    printf("Salary amount/hr: \n");
    scanf("%f", &salary);

    printf("Expected Output: \n");
    printf("Employees ID = %d\n", numbers);
    printf("Salary = U$ %.2f\n", hrs * salary);
    
    return 0;
}//end