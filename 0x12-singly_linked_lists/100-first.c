#include<stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints a sentence befere the main function call
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
