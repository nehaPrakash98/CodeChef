#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100], str1[100];
	int i, k, j, len, count = 0, a[100], n;
	scanf("%d", &n);
	for(j=0; j<n; j++)
	{
		scanf("%s", str);
		len = strlen(str);
		k = len;
		i = 0;
		while(i <= len)
		{
			str1[i] = str[k-1];
			i++;
			k--;
		}
		str1[i] = '\0';
		for(i=0; i<len; i++)
		{
			if(str[i] != str1[i])
			{
				a[j] = 1;
				i = len;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i] == 1)
			printf("losses\n");
		else
			printf("wins\n");
	}
	return 0;	
}
	
