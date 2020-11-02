#include"test.h"
int main(void)
{
	int fd;
	if((fd = open("f2.txt",O_WRONLY|O_CREAT,0644))==-1)
		err_exit("open error");
	close(STDOUT_FILENO);
//	STDOUT_FILENO = dup(fd);
	dup(fd);
	printf("dup test\n");

	
	return 0;
}
