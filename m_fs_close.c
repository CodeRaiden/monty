#include "monty.h"

/**
 * m_fs_close - Closes file stream
 * @status: The status to exit
 * @arg: The pointer to the file stream
 *
 * Return: void
 */
void m_fs_close(int status, void *arg)
{
	FILE *fs;

	(void)status;

	fs = (FILE *) arg;
	fclose(fs);
}


