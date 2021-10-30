#include <stdio.h>
int main()
{
	int ch;
	printf("Enter a number from 1 to 999: ");
	scanf("%i", &ch);
	if (ch < 1 || ch > 999)
		printf("Your number out of bounds!!!");
	else
	{
		if ((ch >= 1) && (ch <= 9))
		{
			if ((ch % 2) == 0)
			{
				printf("It's one digit even number");
			}
			else
				printf("It's one digit odd number");
		}
		else if (ch >= 10 && ch <= 99)
		{
			if ((ch % 2) == 0)
			{
				printf("It's two digit even number");
			}
			else
				printf("It's two digit odd number");
		}
		else if (ch >= 100 && ch <= 999)
		{
			if ((ch % 2) == 0)
			{
				printf("It's three digit even number");
			}
			else
				printf("It's three digit odd number");
		}
	}

}