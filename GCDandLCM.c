#include <stdio.h>

int main(void)
{
	int i, t, j;
	unsigned long long int a, b, gcd[1000], lcm[1000], greater, smaller;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%lld %lld", &a, &b);
		if (a>b)
		{
			greater = a;
			smaller = b;	
		}
			
		else
		{
			greater = b;
			smaller = a;
		}
			
		gcd[i] = 1;
		for(j = 1; j<=smaller/2; j++)
		{
			if(a%j == 0 && b%j==0)
			{
				gcd[i] = j;
			}	
		}
		for(j=greater; j<=a*b; j++)
		{
			if(j%a == 0 && j%b==0)
			{
				lcm[i] = j;
				j=(a*b)+1;
			}	
		}
}
	for(i=0; i<t; i++)
		printf("%lld %lld\n", gcd[i], lcm[i]);
	return 0;
}
