#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;
    float maxDistance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    maxDistance = mileage * petrol;

    if (maxDistance >= distance) {
        printf("Can reach\n");
    } else {
        printf("Cannot reach\n");
    }

    return 0;
}
/** Input
11
6
67

/**Output
Cannot reach
