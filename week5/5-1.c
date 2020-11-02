#include"ch05.h"
int main(void)
{
	printf("hello!");
	//1.刷新缓冲区 
	//fflush(NULL);
	
	//2.填满缓冲区
	//for(int i=0;i<1024;i++)
	//	printf(" ");
	//
	
	//3.改为无缓冲
	//setvbuf(stdout,NULL,_IONBF,0);
	//

	//4.
	//fclose(stdout);
	
	char buf[500];
	setbuf(stdout,buf);
	for(int i=0;i<500;i++)
		printf(" ");

	while(1);

	return 0;
}
