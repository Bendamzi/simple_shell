#include "shell.h"

/**
 * custom_rev_string - function that reverses a string
 * @str: input string
 * Return: nothing
 */
void custom_rev_string(char *str)
{
	int len = strlen(str);

	int i;
	for (i = 0; i < len / 2; ++i)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
