/*
Day 10 - 14/7/2017
Problem: Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

Output
Display the second largest among A, B and C.

Constraints
1 = T = 1000
1 = A,B,C = 1000000

Example
Input
3 
120 11 400
10213 312 10
10 3 450
Output
120
312
10
*/
#include <stdio.h>

void main()
{
	int i = 0, j=0, k=0;
	long long int a[1000], b[1000], temp, n;
	scanf("%lld", &n);
	for (j=0; j<n; j++) 
	{
		for(i=0; i<3; i++)
		{
			scanf("%lld", &a[i]);
		}
		for(i=1; i<3; i++) 
		{
			for(k=0; k<2; k++)
			{
				if(a[k] > a[k+1])
				{
					temp = a[k];
					a[k] = a[k+1];
					a[k+1] = temp;
				}
			}		
		}	
		b[j] = a[1];
	}
	for(i=0; i<n; i++)
		printf("%lld\n", b[i]);
	return 0;
}
