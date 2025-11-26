#include<stdio.h>
#include<stdlib.h>

struct student
{
	int num;
	int score;
}s[5];

int main()
{
	//struct student s[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d %d", &s[i].num, &s[i].score);
	}
	int min = s[0].score;
	int index = 0;
	for (i = 0; i < 5; i++)
	{
		if (min > s[i].score)
		{
			min = s[i].score;
			index = i;
		}
	}
	printf("%d-%d\n", index + 1, min);


	return 0;
}

