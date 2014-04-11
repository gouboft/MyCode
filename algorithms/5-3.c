#include <stdio.h>
void main()
{
	int ret;
	int x, y;
	x = 20;
	y = 100;
	ret = gcd(x,y);
	printf("%d and %d 's gcd is %d\n", x, y, ret);
}

int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

