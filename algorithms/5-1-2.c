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
	unsigned long ret;
	unsigned long sum, n;
	sum = pow(10, 3);
	int M = 997;
	
	ret = fun(sum) % M;
	printf("the result is %f\n", ret);
}
