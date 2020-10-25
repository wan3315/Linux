#include "week3.h"

int main(void)
{
	FILE *fp;
	char buf[80];
	printf("creat file");
	if((fp=fopen("test_file","w"))==NULL)
	{
		perror("fopen failed!\n");
		exit(1);
	}
	printf("writing string to test_file.\n");
	fputs("test data",fp);
	if((fp=freopen("test_file","r",fp))==NULL)
	{
		perror("freopen failed!\n");
		exit(1);
	}
	printf("read string from test_file: ");
	fgets(buf,sizeof(buf),fp);
	printf("%s\n",buf);
	fclose(fp);
	return 0;
}
