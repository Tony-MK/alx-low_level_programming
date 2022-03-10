#include <stdio.h>

int main(){

	char* template = "Size of a %s: %d bytes(s)\n";
	printf(template, "char", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf(template, "long int", sizeof(long int));
	printf(template, "long long int", sizeof(long long int));
	printf(template, "float", sizeof(float));
	return 0;

}
