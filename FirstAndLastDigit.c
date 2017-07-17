#include <stdio.h>

int main(void)
{
	int n, i, j;
	long int a, b[1000], s[1000];
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
		scanf("%ld", &a);
		j = 0;
		while(a>0)
		{
			b[j] = a%10;
			a = a/10;
			j++;
		}
		if(j==1)
			s[i] = b[j-1];
		else
			s[i] = b[0]+b[j-1];
	}	
	for(i=0; i<n; i++)
	{
		printf("%ld\n", s[i]);
	}
	return 0;
}
