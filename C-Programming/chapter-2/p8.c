#include <stdio.h>

float findInterest(int iter, float payment, float percent, float amount){
    amount = (amount - payment) + (percent * amount);
    printf("Balance remaining after %d payment: $%.2f\n", iter, amount);
    return amount;
}

int main(void){
    float amount, interest, payment;
    
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest_rate = (interest / 100) * (1.0 / 12);
    int iterations = 10;
    for (int i = 0; i < iterations; i++) {
        amount = findInterest(i + 1, payment, monthly_interest_rate, amount);
    }
    return 0;
}