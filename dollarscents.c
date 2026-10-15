#include <stdio.h>

int main() {
    int d1, c1, d2, c2;
    int dollars, cents, totalCents;

    scanf("%d", &d1);
    scanf("%d", &c1);
    scanf("%d", &d2);
    scanf("%d", &c2);

    totalCents = c1 + c2;
    dollars = d1 + d2 + totalCents / 100;
    cents = totalCents % 100;

    printf("%d\n", dollars);
    printf("%d\n", cents);

    return 0;
}
/** Input
30
10
140
99

/** Output
171
9

