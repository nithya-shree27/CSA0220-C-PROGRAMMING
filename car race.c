#include <stdio.h>

int main() {
    int A, B, C, car;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &car);

    if (car % 3 == A % 3) {
        printf("Car %d goes into road A\n", car);
    } else if (car % 3 == B % 3) {
        printf("Car %d goes into road B\n", car);
    } else if (car % 3 == C % 3) {
        printf("Car %d goes into road C\n", car);
    } else {
        printf("No path exists\n");
    }

    return 0;
}
/** Input
243
136
567
17
/** Output
Car 1 goes into road B
