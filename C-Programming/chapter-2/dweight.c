#include <stdio.h>
#define INCHES_PER_POUND 166
int main(void){
    int height, length, width;
    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the length of the box: ");
    scanf("%d", &width);

    printf("Dimensional Weight: %d\n", ((height * width * length) + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
    return 0;
}
