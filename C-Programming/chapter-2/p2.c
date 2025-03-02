#include <stdio.h>
#define PI 3.14159f
#define MULTIPLIER 4/3

int main(void){
    int r;
    if(scanf("%d", &r) == 1){
        float volume = (float) (MULTIPLIER * PI * r * r * r);
        printf("The volume of the sphere is: %.2f\n", volume);
    } else {
        printf("Invalid input.\n");
    }
}