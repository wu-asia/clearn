/* Checks numbers for repeated digits */
#include <stdbool.h> /* C99 only */
#include <stdio.h>
int main(void)
{
	bool digit_seen[10] = { false };
	int digit;
	long n;
	long count = 0;
	printf("Enter a number: ");
	scanf_s("%ld", &n);
	while (n > 0) 
	{
		digit = n % 10;
		if (digit_seen[digit])
		{
			printf("%d\n", digit);
			count++;
		/*	break;*/
		}
		digit_seen[digit] = true;
		n /= 10;
	}
	if (count != 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
	return 0;
}