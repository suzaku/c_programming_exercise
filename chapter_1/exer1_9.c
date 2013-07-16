#include <stdio.h>

main() {
    int prev, c;

    prev = EOF;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && prev == ' ') {
            continue;
        }
        putchar(c);
        prev = c;
    }
}
