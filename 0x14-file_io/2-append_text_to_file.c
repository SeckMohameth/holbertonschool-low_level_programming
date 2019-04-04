#include "holberton.h"

/**
* append_text_to_file - append to a file
* @filename: pointer to file
* @text_content: pointer to text content
* Return: return int
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num, i;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (0);


	while (text_content[i] != '\0')
		i++;


	num = write(fd, text_content, i);
	if (num == -1)
		return (0);

	close(fd);

	return (1);

}
