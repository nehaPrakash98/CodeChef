/*
Day 10: 14/7/2017
Problem: Write a program to check whether a triangle is valid or not, when the three angles of the triangle 
are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degress.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three angles A, B and C of triangle separated by space.

Output
Display 'YES' or 'NO' if the triangle is Valid or not respectively.

Constraints
1 = T = 1000
40 = A,B,C = 180

Example
Input
3 
40 40 100
45 45 90
180 0 0
Output
YES
YES
NO
*/

#include <stdio.h>

int main(void)
{
	unsigned int n, i, j, a[1000], b[1000], sum;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		sum = 0;
		for(j = 0; j<3; j++)
		{
			scanf("%d", &a[j]);
			sum += a[j];
		}
		if(sum == 180)
			b[i] = 1;
		else
			b[i] = 0;
	}
	for(i=0; i<n; i++)
	{
		if(b[i] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
