#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
* read_textfile - read text file and print to POSIX
* @filename: pointer to file name
* @letters: number of letters
* Return: returns actual number of letters
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char zard[1024];
	int mo;
	int belle;

	if (filename == NULL)
		return (0);



	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	mo = read(fd, zard, letters);

	if (mo == -1)
		return (0);


	belle = write(STDOUT_FILENO, zard, mo);
	if (mo != belle && belle < mo)
		return (0);

	close(fd);

	return (belle);
}
