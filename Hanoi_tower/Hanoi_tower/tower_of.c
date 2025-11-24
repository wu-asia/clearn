#include<stdio.h>

long long  hanoi(int n, char F, char A, char T)
{
	static long long count = 0;
	if (n == 1)
	{
		count++;
		printf("Move disk 1 from %c to %c\n", F, T);
	}
	else
	{
		hanoi(n - 1, F, T, A);
		count++;
		printf("Move disk %d from %c to %c\n", n, F, T);
		
		hanoi(n - 1, A, F, T);
	}
	return count;
}
int main()
{
	printf("count:%d",hanoi(10, 'A', 'B', 'C'));
	return 0;
}