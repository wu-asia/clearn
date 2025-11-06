#include<stdio.h>
#include<math.h>
int compute(int num)
{
	int res = 0;
	while (num != 0)
	{
		res += (num % 10);
		num /= 10;
	}
	return res;
}
int main()
{
	int num;
	scanf("%d", &num);
	int numb = abs(num);
	
	printf("sum=%d\n", compute(numb));

	return 0;
}