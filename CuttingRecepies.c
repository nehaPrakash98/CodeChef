#include <stdio.h>

int main(void)
{
	int n, count = 0, small, i, b[100], k; 
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
		scanf("%d", &k);
		small = b[0]; 
		for(i=0; i<k; i++)
		{
			scanf("%d", b[i]);
			if(b[i] < small)
				small = b[i];
			if(b[i]%small == 0)
				count++;
		}
		if(count == k)
		{
			for(i = 0; i<n; i++)
			{
				b[i] = b[i]/small;
				printf("%d\n", b[i]);
			}
		}
		
	}
}
