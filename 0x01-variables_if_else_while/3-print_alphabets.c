#include <stdio.h>

/**
 * main - print lowercase and uppercase a-zA-Z using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercase a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'z') /*print upercase A-Z*/
	{
		putchar(upper);
		upper++;
	}
