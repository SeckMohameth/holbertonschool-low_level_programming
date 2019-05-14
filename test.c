#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(vint argc, char *argv[])
{
	int fd;
	char buff[14];

	/* write */

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		printf("faile to create and open file\n");
		exit(1);
	}


	write(fd, "Hello World\n", 13);


	close (fd);



	fd = open("myfile.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("faile to create and open file\n");
		exit(1);
	}

	read(fd, buff, 13);



	return (0);
}
