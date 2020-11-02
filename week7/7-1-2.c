#include"ch07.h"

int main(int argc,char *argv[])
{
	/*
	for(int i = 0;i<argc;i++)
	{
		printf("argv[%d] : %s\n",i,argv[i]);
	}*/
	if(argc!=3)
	{
		printf("Please input 3 parameters");
		return 0;
	}
	int a1 = atoi(argv[1]);
	int a2 = atoi(argv[2]);
	printf("%d\n",a1+a2);

	return 0;
}
