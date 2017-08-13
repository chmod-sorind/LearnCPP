#include "main.h"

// Function call by reference
// function definition to swap_by_reference the values.
void swap_by_reference(int &x, int &y)
{
	int temp;
	temp = x; /* save the value at address x */
	x = y; /* put y into x */
	y = temp; /* put x into y */

	return;
}