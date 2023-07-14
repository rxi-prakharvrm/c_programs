/* program that displays the recommended actions
depending on the color of a traffic light using
the switch statement */


#include <stdio.h>

int main() {
    int color;
    printf("Enter the color of light(1.red/2.green/3.yellow): ");
    scanf("%d", &color);
    switch(color) {
        case 1: printf("Stop");
                break;

        case 2: printf("Start");
                break;

        case 3: printf("Ready");
                break;

        default: printf("Invalid choice");
    }
    return 0;
}
