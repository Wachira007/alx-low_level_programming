#include "main.h"

/**
*create_file - creates file
*@filename: filename
*@text_content: contents in file.
*Return: success: 1 fail: -1
*/

int create_file(const char *filename, char *text_content)
{
	int fld;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fld == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rwr = write(fd, text_content, letters);

	if (rwr == -1)
		return (-1);

	close(fld);

	return (1);
}
