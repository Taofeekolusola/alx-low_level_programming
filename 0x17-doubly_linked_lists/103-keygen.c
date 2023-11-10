#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - to generate a key depending on username for crackme5
 * @argc: the number of arguments passed
 * @argv: the arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int a, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char pas[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	pas[0] = l[(len ^ 59) & 63];
	for (a = 0, add = 0; i < len; i++)
		add += argv[1][a];
	pas[1] = l[(add ^ 79) & 63];
	for (a = 0, b = 1; a < len; a++)
		b *= argv[1][a];
	pas[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], a = 0; a < len; a++)
		if ((char)b <= argv[1][a])
			b = argv[1][a];
	srand(b ^ 14);
	pas[3] = l[rand() & 63];
	for (b = 0, a = 0; a < len; a++)
		b += argv[1][a] * argv[1][a];
	pas[4] = l[(b ^ 239) & 63];
	for (b = 0, a = 0; (char)a < argv[1][0]; a++)
		b = rand();
	pas[5] = l[(b ^ 229) & 63];
	printf("%s\n", pas);
	return (0);
}
