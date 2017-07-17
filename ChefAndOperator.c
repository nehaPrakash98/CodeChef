#include <stdio.h>

int main(void)
{
	int n, i;
	long long int a, b;int c[10000];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%lld %lld", &a, &b);
		if(a>b)
			c[i] = 1;
		else if(a<b)
			c[i] = 2;
		else if(a == b)
			c[i] = 3;
	}
	for(i=0; i<n; i++)
	{
		if(c[i] == 1)
			printf(">\n");
		else if(c[i] == 2)
			printf("<\n");
		else if(c[i] == 3)
			printf("=\n");
	}
	return 0;
}
