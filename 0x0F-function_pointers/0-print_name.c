#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name to be printed
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	_putchar("my name is taofeek");
	_putchar("\n");
}
int main()
{
	char a;
	void (*ptr)(char*, void (*)(char*)) = print_name
	ptr("Taofeek, (Olusola)");
}
