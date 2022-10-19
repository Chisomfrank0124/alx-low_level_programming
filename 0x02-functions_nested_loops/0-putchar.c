#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -> a main function
 * Description: a function that prints _putchar
 * return: (void)
 */
int main()
{
	/*function definition*/
	char c[8] ="_putchar";
	int i;

	/*logic*/
	for(i = 0; i < 8; i++)
	{
	       	_putchar(c[i]);
        }
	_putchar('\n');
	return 0;
}
