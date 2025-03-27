#include<stdio.h>

/*
 * main - Function verifies if number of user is positive or negative
 * Return: 0 Always success
 */

int main()
{
	int n;

	printf("Put a number:");
	scanf("%d", &n);

	if (n>0)
	{
		printf("vous avez entré un entier positif: %d\n", n);	
	}
	else if (n<0)
	{
		printf("vous avez entré un entier négatif: %d\n", n);
	}

	else
	{
		printf("vous avez saisie 0\n");
	}
	return (0);
}
