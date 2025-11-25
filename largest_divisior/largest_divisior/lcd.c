#include<stdio.h>
int lcd(int n, int m)
{
	int c = n % m;

	while (c != 0)
	{

		n = m;
		m = c;
	}
	return n;
}
int main()
{
	printf("hehe");
	printf("%d", lcd(12, 15));

	return 0;
}