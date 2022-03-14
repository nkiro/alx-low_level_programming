#include <stdio.h>

/**
 * main - print 0-9 separated with commas, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number =48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}
		
			putchar(',');
			putchar(' ');
		}

	putchar("\n);

	return (0);
}
