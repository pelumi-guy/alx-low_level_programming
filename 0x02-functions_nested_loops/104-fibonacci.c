#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
    int i;
    unsigned long prev, next, fib;
    unsigned long m, n, p, carry;

    prev = 0;
    next = 1;
    for (i = 1; i <= 91; i++)
    {
        fib = prev + next;
        prev = next;
        next = fib;
        printf("%lu, ", fib);
    }
    m = prev % 1000;
    prev = prev / 1000;
    n = next % 1000;
    next = next / 1000;
    for (i = 91; i <= 98; i++)
    {
        carry = (m + n) / 1000;
        p = (m + n) - carry * 1000;
        fib = (prev + next) + carry;
        m = n;
        n = p;
        prev = next;
        next = fib;
        if (p >= 100)
            printf("%lu%lu", fib, p);
        else
            printf("%lu0%lu", fib, p);
        if (i != 98)
            printf(", ");
}
    putchar('\n');
    return (0);
}