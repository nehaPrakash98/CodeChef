#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, j, n, k, a, c[1000], count = 0;
	char str[1000], str1[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		scanf("%s", str);
		for(j=0; j<a; j++)
		{
			str1[j] = 'N';
		}
		str1[j] = '\0';
		for(k = 0; k<a; k++)
		{
			if(strcmp(str, str1) == 0)
			{
				c[i] = 3;
			//	printf("NOT SURE\n");
				k=a;
			}
			else if(str[k] == 'I')
			{
				c[i] = 1;
			//	printf("INDIAN\n");
				k=a;
			}
			else if(str[k] == 'Y')
			{
				c[i] = 2;
			//	printf("NOT INDIAN\n");
				k = a;	
			}
		}
	}
	for(i=0; i<n; i++)
	{
		switch(c[i])
		{
			case 1:
				printf("INDIAN\n");
				break;
			case 2:
				printf("NOT INDIAN\n");
				break;
			case 3:
				printf("NOT SURE\n");
				break;
			default:
				printf("Error");
		}
	}
}
