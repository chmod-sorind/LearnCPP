#include "main.h"

// Function call by value
// function definition to swap_by_value the values.
void swap_by_value(int x, int y)
{
	int temp;
	temp = x; /* save the value of x */
	x = y;    /* put y into x */
	y = temp; /* put x into y */

	return;
}
