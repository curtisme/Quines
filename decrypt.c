#include <stdio.h>

int
f(int c) {
    if (c==10)
        return c;
    int a = (c-33)%94;
    return (a < 0 ? 94 + a : a) + 32;
}

int
main(int args, char **argv) {
    int c;
    while ((c = getc(stdin)) != -1) {
        putc(f(c), stdout);
    }
}
