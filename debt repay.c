#include <stdio.h>

int main() {
    float principal, rate, years;
    float interest, amount, discount, finalAmount;

    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &years);

    interest = (principal * rate * years) / 100;
    amount = principal + interest;
    discount = interest * 0.02;
    finalAmount = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", finalAmount);

    return 0;
}
/** Input
100
1
10
/** Output
10.00
110.00
0.20
109.80
