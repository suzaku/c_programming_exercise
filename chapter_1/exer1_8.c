#include <stdio.h>

main() {
    int c;
    int n_blk, n_tab, n_l;

    n_blk = n_tab = n_l = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            n_blk++;
        } else if (c == '\t') {
            n_tab++;
        } else if (c == '\n') {
            n_l++;
        }
    }

    printf("%d %d %d\n", n_blk, n_tab, n_l);
}
