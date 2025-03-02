#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALING_FACTOR (5.0f/9.0f)

int main(void){
    float farenheit, celcius;
    printf("Enter the temperature °F: ");
    scanf("%f", &farenheit);
    
    celcius = (farenheit - FREEZING_POINT) * SCALING_FACTOR;
    printf("%.1f°F is: %.1f°C\n", farenheit, celcius);
    return 0;
}

