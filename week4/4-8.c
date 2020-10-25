#include"week4.h"

int main(void)
{
	int fd;
	if((fd=open("./out.bat",O_CREAT|O_WRONLY,0644))==-1)
		err_exit("file open error");
//	if(dup2(fd,STDOUT_FILENO)==-1)
//		err_exit("error");
	fd=dup(STDOUT_FILENO);
	printf("this is test2\n");
	close(fd);
	return 0;
}
