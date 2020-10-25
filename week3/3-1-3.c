#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	FILE *fp = fopen("./ftest.txt","r");
	char buf[80];
	memset(buf,0,sizeof(buf));
	fgets(buf,sizeof(buf),fp);
	//fputs(buf,stdout);
	//fwrite(buf,sizeof(buf),1,fp);
	printf("\n the string is %s \n",buf);
	fclose(fp);
	return 0;
}
