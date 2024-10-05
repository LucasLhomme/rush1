/*
** EPITECH PROJECT, 2024
** rush3
** File description:
** rush3
*/

void fin(int x, int y)
{
    int bot = x;

    my_putchar('C');
    if (x > 1)
        for (bot; bot != 2; bot = bot - 1)
            my_putchar('B');
    if (x > 1)
        my_putchar('C');
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

    my_putchar('A');
    if (x > 1)
        for (top; top != 2; top = top - 1)
            my_putchar('B');
    if (x > 1)
	my_putchar('A');
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
            my_putchar('B');
            etr(x, y);
        if (x > 1)
	    my_putchar('B');
	my_putchar('\n');
        }
    }
    if (y > 1)
        fin (x, y);    
}

int main(void)
{
    int x = 1;
    int y = 5;
    rush(x,y);
}
