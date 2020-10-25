#include"week4.h"
int main(void)
{
	int n,fd;
	char buf;
	fd=open("./file.test",O_CREAT|O_RDWR,0644);
	srand(time(0));
	n=rand()%26;
	buf=(char)('A'+n);
	printf("n=%c\n",buf);
	write(fd,&buf,1);
	sleep(40);
	lseek(fd,10,SEEK_SET);
	srand(time(0));
	n=rand()%26;
	buf=(char)('A'+n);
	printf("n=%c\n",buf);
	write(fd,&buf,1);
	sleep(30);
	close(fd);
	return 0;
}
