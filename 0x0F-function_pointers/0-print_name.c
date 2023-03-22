#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name using pointer to function
 * @name: The string to be added
 * @f: The pointer to function
 *
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
