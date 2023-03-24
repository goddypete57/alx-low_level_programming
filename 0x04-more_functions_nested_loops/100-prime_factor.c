#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
int _putchar(char c);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
	_putchar('\n');
}
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
*/

void largest_prime_factor(long int num)
{
	int prmNu, largest;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}


	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
