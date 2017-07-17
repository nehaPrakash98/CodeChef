#include <stdio.h>

int main(void)
{
	int n, i, a, b, c;
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a>5 && b<6 && c>7)
			printf("10\n");
	
		else
			printf("5\n");
		}
}
