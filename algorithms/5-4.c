#include <stdio.h>

char *a; 
int i;

int eval()
{
	int x = 0;
	printf("a[%d] = %d\n", i, a[i]);
	while (a[i] == ' ') 
		i++;

	if (a[i] == '+'){ 
		i++;
		return eval() + eval(); 
	}

	if (a[i] == '*') {
		i++;
		return eval() * eval(); 
	}

	while ((a[i] >= '0') && (a[i] <= '9')) 
		x = 10*x + (a[i++]-'0'); 

	return x;
}

void main()
{
	a = "* + 7 * * 4 6 + 8 9 5";
	i = 0;

	printf("the value of it is %d\n", eval());
}
