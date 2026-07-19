#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

struct stu
{
	char name[10];
	int age;
	double score;
};
void set_stu(struct stu* ps)
{
	strcpy((*ps).name, "zhangsan");
	(*ps).age = 20;
	(*ps).score = 100.0;
}

int main()
{
	struct stu s = { 0 };
	set_stu(&s);
	print_stu(s);
	return 0;
}