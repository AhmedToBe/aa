#include "main.h"

/**
 * main - entry point
 * Description: print _putchar usint putchar prototype
 *
 * Return: Always 0 success
*/

int main(void)
{
	char str[] = "_putcha";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n')

	return (0);
