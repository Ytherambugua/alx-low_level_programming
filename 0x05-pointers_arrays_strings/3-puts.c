#include "main.h"

/**
 * _putchar - writes a character to stdout.
 * @c: The character to print.
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _puts - a function that prints a string.
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                _putchar(str[i]);
        }
        _putchar('\n');
}

