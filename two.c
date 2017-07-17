#include <stdio.h>
#include<math.h>

int main(void)
{
	int k, n, i=0, count=0, a[10];
	scanf("%d %d", n, k);
	printf("array starts:\n");
	for(i = 0; i<n; i++)
	{
		scanf("%d", a[i]);
	}
	i=0;
	while(i<n)
	{
		if((a[i]%k)==0)
			count++;
		
		i++;
	}
	printf("%d", count);
	return 0;
}
