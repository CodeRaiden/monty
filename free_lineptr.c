#include "monty.h"

/**
 * free_lineptr - The free line pointer returned by getline
 * @status: Exit status
 * @arg: The pointer to line
 *
 * Return: void
 */
void free_lineptr(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}


