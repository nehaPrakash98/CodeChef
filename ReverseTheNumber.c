/*
Day 9 - 13/07/17
Problem: If an Integer N, write a program to reverse the given number.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the reverse of the given number N.

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
54321
30213
3212
*/
#include <stdio.h>

int main ()
{
	long int rem, a, b[1000];
	int n, i, sum;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%ld", &a);
		sum = 0;
		while(a>0) 
		{
			sum=sum*10+a%10;
			a=a/10;
		}
		b[i] = sum; 		
	}	
	for(i=0; i<n; i++)
	{
		printf("%ld\n", b[i]);
	}
   return(0);
}
