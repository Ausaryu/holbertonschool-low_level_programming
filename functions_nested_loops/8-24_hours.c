#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - tout plein de minutes
 *
 *Return: les minutes
 */
void jack_bauer(void)
{
	int x;
	int y;

	/*Boucle des heures*/
	for (y = 0; y < 24; y++)
	{
		/*Boucle d'augmentation des minutes*/
		for (x = 0; x < 60; x++)
		{
			/*print les heures*/
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			/*print les minutes*/
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
	}
}
