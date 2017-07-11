/*
Problem: Write a program that accepts a number, n, and outputs the same.

Input
The only line contains a single integer.

Output
Output the answer in a single line.

Constraints
0 = n = 105

Example:
Sample Input
123
Sample Output
123
*/

#include <stdio.h>

int main(void)
{
	long int n;
	scanf("%ld", &n);
	printf("%ld", n);
	return 0;
}
