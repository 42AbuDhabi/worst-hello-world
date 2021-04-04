#include <stdio.h>

int main ()
{
    char b;
    char c = 0;

    b = 1;
    start:

    if (b == 5) { putc ('o', stdout); goto next; }
    if (b == 9) { putc ('r', stdout); goto next; }
    if (b == 1) { putc ('H', stdout); goto next; }
    if (b == 10) { putc ('l', stdout); goto next; }
    if (b == 7) { putc ('w', stdout); goto next; }
    if (b == 6) { putc (' ', stdout); goto next; }
    if (b == 4) { putc ('l', stdout); goto next; }
    if (b == 2) { putc ('e', stdout); goto next; }
    if (b == 11) { putc ('d', stdout); goto next; }
    if (b == 12) { putc ('\n', stdout); goto next; }
    if (b == 3) { putc ('l', stdout); goto next; }
    if (b == 8) { putc ('o', stdout); goto next; }

    next:
    b = b + 1;
    if (b < 13) goto start;

    goto end;

    end: c = 0;

}