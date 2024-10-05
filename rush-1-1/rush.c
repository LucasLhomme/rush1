/*
** EPITECH PROJECT, 2024
** rush1
** File description:
** rush1
*/

void fin(int x, int y)
{
    int bot = x;

    my_putchar('o');
    if (x > 1)
        for (bot; bot != 2; bot = bot - 1)
            my_putchar('-');
    if (x > 1)
        my_putchar('o');
    if (y > 1)
        my_putchar('\n');
}

void etr(int x, int y)
{
    int mid = x;

    if (x > 1) {
        for (mid; mid != 2; mid = mid -1)
            my_putchar(' ');
    }
}

void deb(int x, int y)
{
    int top = x;

    my_putchar('o');
    if (x > 1)
        for (top; top != 2; top = top - 1)
            my_putchar('-');
    if (x > 1)
        my_putchar('o');
    my_putchar('\n');
}

void pbl(int x, int y)
{
    if (x > 1)
        my_putchar('|');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 12);
        my_putchar('\n');
        return 0;
    }
    deb(x, y);
    if (y > 1) {
        for (y; y != 2; y = y - 1) {
            my_putchar('|');
            etr(x, y);
        pbl(x, y);
        }
    }
    if (y > 1)
        fin(x, y);
}
