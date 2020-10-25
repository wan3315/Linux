#include "week3.h"

int main(void)
{
	int fd;
	fd = open("./test.txt",O_RDONLY);
	printf("fd = %d\n",fd);
	return 0;
}
