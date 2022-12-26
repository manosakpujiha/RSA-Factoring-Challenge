#include <stdio.h>
#include <string.h>
#include <stdlib.h>
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/**
 * main - Factorize as many numbers as possible into
 * a product of two smaller numbers.
 * @argc: command line counter
 * @argv: argument
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	ssize_t nread;
	size_t len = 0;
	char *buff = NULL;
	FILE *stream = fopen(argv[1], "r");
	long unsigned int num;
	long unsigned int i;

	if (argc == 2 && *argv)
	{
		while ((nread = getline(&buff, &len, stream)) != -1)
		{
			buff[strlen(buff) - 1] = '\0';
			if (strlen(buff) < 20)
			{
				num = atol(buff);
				for (i = 2; num % i != 0; i++)
				{
				}
				printf("%lu=%lu*%lu\n", num, (num / i), i);
			}
		}
	}
	return (0);
}
