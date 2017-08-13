#include "main.h"

// Function call by pointer
// function definition to swap_by_pointer the values.
void swap_by_pointer(int *x, int *y)
{
	int temp;
	temp = *x; /* save the value at address x */
	*x = *y; /* put y into x */
	*y = temp; /* put x into y */

	return;
}
