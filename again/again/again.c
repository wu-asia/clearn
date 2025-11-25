#include<stdio.h>

int lcd(int n, int m)
{
	if (m == 0)
	{
		return n;
	}

	while (m != 0)
	{
		int c = n % m;
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