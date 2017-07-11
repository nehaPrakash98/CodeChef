/*
Problem: Write a program to find the remainder when two given numbers are divided.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
Find remainder when A is divided by B.

Constraints
1 = T = 1000
1 = A,B = 10000

Example
Input
3 
1 2
100 200
10 40
Output
1
100
10
*/
#include <stdio.h>

int main(void)
{
	int n, i, a, b, rem[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &a, &b);
		rem[i] = a%b;
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n", rem[i]);
	}
	return 0; 
}
