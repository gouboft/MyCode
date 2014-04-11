#include <stdio.h>

int main(void)
{
	short d;
	int i;
	long l;
	long long ll;
	printf("The size of short %lu\n", sizeof d);
	printf("The size of int %lu\n", sizeof i);
	printf("The size of long %lu\n", sizeof l);
	printf("The size of long long %lu\n", sizeof ll);
	d = -0;
	printf("d = %x\n", d);
	return 0;
}
