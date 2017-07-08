/*
Problem: You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Calculate the sum of digits of N.

Constraints
1 = T = 1000
1 = N = 100000

Example
Input
3 
12345
31203
2123
Output
15
9
8
*/

#include <stdio.h>

int main(void)
{
	unsigned int n;
	int i, rem, sum[100], a[1000], j;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		sum[i] = 0;
			while(a[i] > 0)
		{
			rem = a[i]%10;
			sum[i] += rem;
			a[i] = a[i]/10;
		}
	}
	for(i = 0; i<n; i++)
	{
	
	printf("%d\n", sum[i]);
	}
	return 0;	
}

