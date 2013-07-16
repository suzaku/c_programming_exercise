#include <stdio.h>

#define MAX_LENGTH 32
#define IN 0
#define OUT 1

main() {
    int lengths[MAX_LENGTH];
    int i, j, c, acc, state;

    for (i = 0; i < MAX_LENGTH; i++) {
        lengths[i] = 0;
    }

    acc = 0;
    state = IN;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                lengths[acc] += 1;
                acc = 0;
                state = OUT;
            }
        } else {
            state = IN;
            acc += 1;
        }
    }

    printf("Word length distribution: \n");

    for (i = 0; i < MAX_LENGTH; i++) {
        printf("Length %d:\t", i);
        for (j = 0; j < lengths[i]; j++) {
            printf("|");
        }
        printf("\n");
    }
}
