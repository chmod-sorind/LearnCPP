#include "main.h"

float getPST(float pt)
{
	float pstPercentage = 9.975f;
	float p = pstPercentage / 100 * pt;
	return p;
}
