#include <stdio.h>
int main(void)
{
	int i, n, p, q, large, pos, a[100];
	scanf("%d", &n);
	large = a[0];
	for(i = 0; i<n; i++)
	{
		scanf("%d %d", p, q);
		if(p>=q)
		{
			a[i] = p-q;
			if(a[i] > large)
			{
				large = a[i];
				pos = 1;
			}
			
		}
		else
		{
			a[i] = q-p;
			if(a[i] > large)
			{
				large = a[i];
				pos = 2;
			}
		}	
	}
	printf("%d %d", large, pos);
}
