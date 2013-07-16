#include <stdio.h>

main() {
    printf("getchar() != EOF is %d\n",
            getchar() != EOF); /* 1 if true else 0 */
    printf("EOF is %d\n", EOF);
}
