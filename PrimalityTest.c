#include <stdio.h>

int main(void)
{
	int n, count =0, a, i, j, b[100];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		if(a == 1)
		{
			b[i] = 2;	
		}
			
		else {
			for(j = 2; j<=a/2; j++
			
			
			)
			{
				if(a%j == 0)
				{
					b[i] = 1;
				}
			}
		}
	}
	for(i=0; i<n; i++)
	{
		if(b[i]==1)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}
