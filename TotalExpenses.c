#include <stdio.h>

int main(void)
{
	int i, t, q;
	double p, c[1000];
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%d %lf", &q, &p);
		if(q>=1000)
			c[i] = (double)(q*p*0.9);
		else if(q<1000)
			c[i] = q*p;
	}
	for(i=0; i<t; i++)
		printf("%lf\n", c[i]);
	return 0;
}
