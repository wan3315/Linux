#include"week4.h"
char buf2[]="0123456789";
char buf1[]="abcdefghij";
int main()
{
	int fd;
	if((fd=open("file.hone",O_WRONLY|O_CREAT,0644))<0)
		err_exit("creat error");
	if(write(fd,buf1,10)!=10)
		err_exit("write error");
	if(lseek(fd,40,SEEK_SET)==-1)
		err_exit("lseek error");
	if(write(fd,buf2,10)!=10)
                err_exit("write error");

	return 0;

}
