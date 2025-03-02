#include <stdio.h>

void calculate_bills(int amount, int bill){
    printf("$%d bills: %d\n", bill, amount/bill);
}

int main(void)
{
    int amount;
    printf("Enter an amount: ");
    if (scanf("%d", &amount) == 1){
        calculate_bills(amount, 20);
        amount %= 20;
        calculate_bills(amount, 10);
        amount %= 10;
        calculate_bills(amount, 5);
        amount %= 5;
        calculate_bills(amount, 1);
    }
    else{
        printf("Wrong input.\n");
        while (getchar() != '\n'); // Clear the input buffer
    }	
    return 0;
}
