/*
Day 8 - 12/07/17
Problem: Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the factorial of the given number N .

Constraints
1 = T = 1000
0 = N = 20

Example
Input
3 
3 
4
5
Output
6
24
120
*/

#include <stdio.h>

int main(void)
{
	int i, n, j=0;
	long long int fact=1;
	int a[100];
	scanf("%d", &n);
	if(n>=1 && n<=100){	
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		
			while(j<n)
		{
			if(a[j]>=1 && a[j]<=100)
			{
				fact = 1;
				for(i=a[j]; i>0; i--)
				{
					fact = fact*i;
				}
				printf("%lld\n", fact);
			}
			j++;		
		}	
	}
	return 0;
}
