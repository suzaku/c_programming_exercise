#include <stdio.h>

#define MAX_LENGTH 32
#define IN 0
#define OUT 1

main() {
    int lengths[MAX_LENGTH];
    int i, c, acc, state;
    int not_finished;

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
            if (state == OUT) {
                state = IN;
            }
            acc += 1;
        }
    }

    printf("Word length distribution: \n");

    for (i = 1; i < MAX_LENGTH; i++) {
        printf("%2d  ", i);
    }
    printf("\n");

    not_finished = 1;

    while (not_finished) {
        not_finished = 0;

        for (i = 1; i < MAX_LENGTH; i++) {

            if (lengths[i] > 0) {
                printf("__");
                lengths[i] -= 1;

                if (lengths[i] > 0) {
                    not_finished = 1;
                }
            } else {
                printf("  ");
            }
            printf(" ");
        }
        printf("\n");
    }
}
