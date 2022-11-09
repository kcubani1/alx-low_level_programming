#include "main.h"

/**
* _abs - value of an integer
* Description: computes the absolute
* value of an int
* @hd: integer type
* Return: absolute value
*/
int _abs(int hd)
{
	if (hd < 0)
	{
		return (hd * -1);
	}
	else
	{
		return (hd);
	}
}
