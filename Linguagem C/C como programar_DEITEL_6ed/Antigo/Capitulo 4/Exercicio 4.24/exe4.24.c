#include <stdio.h>
#include <stdlib.h>
main () {
    int i = 1, j = 2, k = 3, m = 2;
    printf("a) %d\n", i == 1);
    printf("b) %d\n", j == 3);
    printf("c) %d\n", i >= 1 && j < 4);
    printf("d) %d\n", m <= 99 && k < m);
    printf("e) %d\n", j >= i || k == m);
    printf("f) %d\n", k + m < j || 3 - j >= k);
    printf("g) %d\n", !m);
    printf("h) %d\n", ! (j - m));
    printf("i) %d\n", ! (k > m));
    printf("j) %d\n", ! (j > k));
    system("pause");
    return 0;
}