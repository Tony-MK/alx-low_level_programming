/**
 * print_name - Prints name via a other function
 * @name: String
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
