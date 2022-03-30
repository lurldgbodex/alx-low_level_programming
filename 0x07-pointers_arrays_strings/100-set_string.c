#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: pointer to set to
 * @to: string to set 
 */
void set_string(char **s, char *to)
{
	*s = to;
}
