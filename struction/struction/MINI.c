#include<stdio.h>

#define MINI(x,y) (x)<(y)?x+2:(y+1)


int main()
{

	int i = 8, j = 10, k;
	k = 5 *MINI(i, j);
	printf("%d\n", k);
}
