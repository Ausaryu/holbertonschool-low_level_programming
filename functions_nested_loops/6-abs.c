#include <stdio.h>
#include "main.h"

/**
 *_abs - ouais
 *@i: the character to check
 *Return: soit i si +i or -i si -i
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}

	return (0);
}
