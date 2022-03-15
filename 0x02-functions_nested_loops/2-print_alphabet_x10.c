#include "main.h"
#include "1-alphabet.c"
/**
 * * print_alphabet_x10 - Prints the alphabet in lower case ten times
*/
void print_alphabet_x10(void)
{
	unsigned short int n = 0x0;

	while (n < 0x0a){
		n++;
		print_alphabet();
	};
}
