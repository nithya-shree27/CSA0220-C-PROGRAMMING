#include <stdio.h>
#include <stdbool.h>

int main() {
    float distance, fare = 100;
    bool member;

    printf("Distance: ");
    scanf("%f", &distance);

    printf("Member (1 for true, 0 for false): ");
    scanf("%d", &member);

    if (distance > 10) {
        fare += (distance - 10) * 20;
    }

    if (member) {
        fare = fare * 0.9;
    }

    printf("Final Fare: ₹%.0f\n", fare);

    return 0;
}
/** Input
Distance: 15
Member: 1
/** Output
Final Fare: ₹180
