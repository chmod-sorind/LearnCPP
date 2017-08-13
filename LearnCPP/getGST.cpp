#include "main.h"


float getGST(float pt)
{
	float gstPercent = 5.0f;
	float g = gstPercent / 100 * pt;
	return g;
}
