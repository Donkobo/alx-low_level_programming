/**
 * File: 2-print_alphabets in c
 * Writer: Chukwudike Ezra
*/

#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase.
 *
 * return: always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
