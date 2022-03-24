#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -1 is string less than the other, 1 if greater than the other and 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
  int counter, cmpval;

  counter = 0;

  while (s1[counter] == s2[counter] && s1[counter] != '\0')
    {
      counter++;
    }

  cmpval = s1[counter] - s2[counter];

  return (cmpval);
}
