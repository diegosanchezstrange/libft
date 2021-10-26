#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main()
{
	int	fd;
	char	*r;

	fd = open("./test.txt", O_RDONLY);
	r = get_next_line(fd);
	printf("r: %s\n", r);
	free(r);
	return (0);
}
