#include <stdio.h>

int main() {
    int experience, performance;

    printf("Experience: ");
    scanf("%d", &experience);

    printf("Performance: ");
    scanf("%d", &performance);

    if (experience > 7 && performance >= 85) {
        printf("Level: Senior\n");
    } else if (experience >= 3 && performance >= 80) {
        printf("Level: Mid-Level\n");
    } else {
        printf("Level: Junior\n");
    }

    return 0;
}
/** Input
Experience: 9
Performance: 88
/** Output
Level: Senior
