#include "holberton.h"
void print_integer(int m);
/**
 * print_number - function print integer.
 * @n: int input
 * Return: void
 */
void print_number(int n)
{
if (n == 0)
	_putchar('0');
else if (n < 0)
{
	_putchar('-');
	print_integer(n * -1);
}
else
	print_integer(n);
}

/**
 * print_integer -  function to print
 * @m: unsigned int
 * Return: void
 */
void print_integer(int m)
{
int i = 1000000000;

for (; i >= 1; i /= 10)
	if (m / i != 0)
	{
		_putchar((m / i) % 10 + '0');
	}
}
