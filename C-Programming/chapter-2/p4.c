#include <stdio.h>

int main(void){
    float amount;
    printf("Enter an amount: ");
    if(scanf("%f", &amount) == 1){
        float tax = 5.0/100 * amount;
        printf("With tax added: $%.2f\n", amount+tax);
    }
    else{
        printf("Wrong input.\n");
    }
}