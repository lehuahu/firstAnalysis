#include "extFunc.h"
extern signed char a[];
extern signed char b[];

signed char firstAnalysis(void)
{
	signed char x;
	signed char y;
	signed char res;
	signed char z;

	y = x + 5;

	z = extFunc(y);

	if (z <= 123)
	{
		res = z + 5;
	}
	else
	{
		res = z + 6;
		res = res/2;
	}
	
	y = a[2]; 
	if(z = 6)
	{
		y = b[3];
	}
	else if(z = 7)
	{
		x = 2;
		y = b[4] + x;
	}

	return res/z;  
}