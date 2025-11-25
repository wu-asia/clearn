//#include<stdio.h>
//
//void hanoi(int n, char F, char A, char T)
//{
//	if (n == 1)
//	{
//		printf("Move disk 1 from %c to %c\n", F, T);
//	}
//	else
//	{
//		hanoi(n - 1, F, T, A);
//		printf("Move disk %d from %c to %c\n", n, F, T);
//		hanoi(n - 1, A, F, T);
//	}
//}
//
//int main()
//{
//	hanoi(3, 'a', 'b', 'c');
//	return 0;
//}