#include"ch07.h"
int main()
{	
	extern char **environ;
	printf("%s\n",getenv("PATH"));
	printf("%s\n",getenv("PWD"));
	printf("%s\n",getenv("HOME"));

	for(int i  = 0;environ[i]!=NULL;i++)
	{
		printf("env[%d] : %s\n",i,environ[i]);
	}
	return 0;
}
