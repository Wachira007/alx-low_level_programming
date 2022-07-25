#include "main.h"

/**
*read_textfile - reads textfile, prints letters
*@filename: filename
*@letters: no. of letters printed
*Return: Success- letters printed Fail- 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fld;
	ssize_t rd, wr;
	char *bf;

	if (!filename)
		return (0);

	fld = open(filename, O_RDONLY);

	if (fld == -1)
		return (0);

	bf = malloc(sizeof(char) * (letters));
	if (!bf)
		return (0);

	rd = read(fld, bf, letters);
	wr = write(STDOUT_FILENO, bf, rd);

	close(fld);

	free(bf);

	return (wr);
}
