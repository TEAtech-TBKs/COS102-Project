#include <stdio.h>

int main() {
    int angleA, angleB, angleC;

    printf("Enter first angle: ");
    scanf("%d", &angleA);

    printf("Enter second angle: ");
    scanf("%d", &angleB);

    angleC = 180 - (angleA + angleB);

    if (angleA == 90 || angleB == 90 || angleC == 90) {
        printf("Right-angled triangle\n");
    } else {
        printf("This is not a right-angled triangle\n");
    }

    return 0;
}
