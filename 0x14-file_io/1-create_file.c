#include "holberton.h"

#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
* create_file - creates file
* @filename: pointer to file
* @text_content: Null terminated string to write file
* Return: int
**/
int create_file(const char *filename, char *text_content)
{
	int fd, number, i = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	number = write(fd, text_content, i);
	if (number == -1)
		return (-1);

	close(fd);
	return (1);

}
