#include <stdio.h>
#include <math.h>

int fun(int n)
{
	if (n == 0)
		return 1;
	
	return n * fun(n-1);
}

void main()
{
	float ret;
	ret = log10(fun(10));
	printf("the result is %f\n", ret);
}
