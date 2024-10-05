/*
** EPITECH PROJECT, 2024
** rush1
** File description:
** rush1
*/

static void fin(int x, int y)
{
    int bot = x;

    my_putchar('C');
    if (x > 1)
        for (bot; bot > 2; bot = bot - 1)
            my_putchar('B');
        if (x > 1)
        my_putchar('A');
        if (y > 1)
        my_putchar('\n');
}

static void etr(int x, int y)
{
    int mid = x;

    for (mid; mid > 2; mid = mid -1)
        my_putchar(' ');
    my_putchar('B');
    my_putchar('\n');
}

static void deb(int x, int y)
{
    int top = x;

    if (x > 1 || y > 1) {
        my_putchar('C');
        for (top; top != 2; top = top - 1)
            my_putchar('B');
        my_putchar('A');
        my_putchar('\n');
    }
}

void larlon(int x, int y)
{
    if (x == 1)
        for (y; y != 0; y -= 1) {
            my_putchar('B');
            my_putchar('\n');
    }
    if (y == 1){
        for (x; x != 0; x = x - 1)
            my_putchar('B');
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 12);
        my_putchar('\n');
        return 0;
    }
    if (x == 1 || y == 1)
        larlon(x, y);
    if (x > 1 && y > 1) {
        deb(x, y);
        for (; y > 2; y = y - 1) {
            my_putchar('B');
            etr(x, y);
        }
        fin(x, y);
    }
}
