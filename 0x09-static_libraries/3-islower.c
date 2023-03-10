#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
 *Checks if a given character is a lowercase letter.
 *@param c The character to check
 *@return 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
