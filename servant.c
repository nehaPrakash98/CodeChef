/*
Problem: Write a program, which takes an integer N and if the number is less than 10 then display "What an obedient servant you are!" otherwise print "-1".

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Output the given string or -1 depending on conditions.

Constraints
1 = T = 1000
-20 = N = 20

Example
Input
3 
1
12
-5
Output
What an obedient servant you are!
-1
What an obedient servant you are!
*/
#include <stdio.h>

int main(void)
{
	int n, i, a, b[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		if(a<10)
			b[i] = 0;
		else
			b[i] = 1; 
	}
	for(i=0; i<n; i++)
	{
		if(b[i] == 0)
			printf("What an obedient servant you are!\n");
		else if(b[i] == 1)
			printf("-1\n");
	}
	return 0;
}
