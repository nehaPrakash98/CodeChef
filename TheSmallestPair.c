/*
Day 10 - 14/7/2017
Problem: You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj, where 1 = i < j = N.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. 
The first line of each description consists of a single integer N.
The second line of each description contains N space separated integers - a1, a2, ..., aN respectively.

Output
For each test case, output a single line containing a single integer - the smallest possible sum for the corresponding test case.

Constraints
T = 105, N = 2 : 13 points.
T = 105, 2 = N = 10 : 16 points.
T = 1000, 2 = N = 100 : 31 points.
T = 10, 2 = N = 105 : 40 points.
1 = ai = 106

Example
Input:
1
4
5 1 3 4
Output:
4
*/
#include <stdio.h>

int main(void)
{
	int j, i, k, l;
	long long int n, a, b[10000], c[10000], sum, temp; 
	scanf("%lld", &n);
	for(i=0; i<n; i++)
	{
		scanf("%lld", &a);
		for(j=0; j<a; j++)
		{
			scanf("%lld", &b[j]);
		}
		for(k = 1; k<a; k++)
		{
			for(l=0; l<(a-1); l++)
			{
				if(b[l]>b[l+1])
				{
					temp = b[l];
					b[l] = b[l+1];
					b[l+1] = temp;
				}
			}
		}
		sum = b[0] + b[1];
		c[i] = sum;	
	}
	for(i=0; i<n; i++)
		printf("%lld\n", c[i]);
	return 0;
}
