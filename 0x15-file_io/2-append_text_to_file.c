#include "main.h"

/**
*append_text_to_file - append text at the end of file
*@filename: filename
*@text_content: added content
*Return: 1-Success, -1:Failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fld;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fld = open(filename, O_WRONLY | O_APPEND);

	if (fld == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fld, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fld);

	return (1);
}
