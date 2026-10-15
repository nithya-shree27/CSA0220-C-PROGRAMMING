#include <stdio.h>

int main() {
    int gold, x, y;
    int longBen, blackbeard, remaining, pirateShare;

    scanf("%d", &gold);
    scanf("%d", &x);
    scanf("%d", &y);

    longBen = gold * x / 100;
    remaining = gold - longBen;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirateShare = remaining / 2;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", pirateShare);

    return 0;
}
/**Input
729
65
87

/**Output
473
222
11
