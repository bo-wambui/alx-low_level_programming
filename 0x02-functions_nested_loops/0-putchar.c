#include <stdio.h>

/**
 * main - starting point
 *
 * Description - A program that prints _putchar
 *
 * Return: 0
 *
 */
int main(void)
{
	char printing[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(printing[i]);
	}
	putchar('\n');

	return (0);
}
