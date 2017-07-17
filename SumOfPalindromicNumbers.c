#include <stdio.h>
int pallindrome(int a);
int main()
{
	int n, i, sum = 0, l, r;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &l, &r);
		for(i = l; i<=r; i++)
		{
			if(pallindrome(i) == 1)
			{
				sum += i;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
int pallindrome(int a)
{
	
	int rev = 0;
	int a1 = a;
	while(a!=0)
	{
		rev = (rev*10)+(a%10);
		a = a/10;
	}
	if(a1 == rev)
		return 1;
	else
		return 0;
}
	
