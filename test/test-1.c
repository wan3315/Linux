#include"test.h"

int main(void)
{
	FILE *stream;
	char buf[80];

	if((stream = fopen("f1.txt","w"))==NULL)
	{
		err_exit("open failed");
	}
	fputs("Hello world\nrow2\nrow3",stream);
	if((stream=freopen("f1.txt","r",stream))==NULL)
		err_exit("freopen failed");

	fgets(buf,sizeof(buf),stream);
	printf("the string is: %s\n",buf);
	fclose(stream);


	return 0;
}
