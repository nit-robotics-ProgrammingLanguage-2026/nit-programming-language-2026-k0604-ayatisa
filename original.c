#include <stdio.h>

int main(void) {
    int n;
    long s = 0;
    scanf("%d", &n);
    if (n < 0) {
        printf("NG");
        return 0;
    }
    for (int i = 1;; i++) {
        if (i > n) {
            break;
        }
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        }
        s += (long)i;
    }
    printf("%ld", s);
    return 0;
}