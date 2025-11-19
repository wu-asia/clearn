#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


void derivative(char* str)
{
	if (!(strcmp(str, "e^x")))
	{
		printf("%s", "e^x");
	}
	else if (!(strcmp(str, "sinx") || strcmp(str, "sin(x)")))
	{
		printf("%s", "cos(x)");
	}
	else if (!(strcmp(str, "cosx") || strcmp(str, "cos(x)")))
	{
		printf("%s", "-sin(x)");
	}
	
}
void de(char str[])
{
	int i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		if (str[i] == 'x' && str[i + 1] == "^" && (isdigit(str[i+2])))
		{
			int x = i;
			if (x == 0)
			{
				int index = 1;
			}
			else
			{
				int index = 0;
				/*while (x >= 0)
				{

					index = str[x - 1] + index * 10;
					x--;
				}*/
				for (int j = 0; j <= x; j++)
				{
					index = (str[j] - '0') + index * 10;
				}
				printf("%d\n", index);
			}
			int emp = 0;
			int y = i;
			while (str[y + 2] != '\0' && str[y + 2] != '\n')
			{
				emp = (str[y + 2] - '0') + emp * 10;
				y++;
			}
			printf("%d\n", emp);
		}

	}
}

int main()
{
	//derivative("e^x");
	de("x^2");
	return 0;
}