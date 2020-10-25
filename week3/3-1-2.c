#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	FILE *fp = fopen("./ftest.txt","w");
	char buf[80];
	int ret = 0;
	memset(buf,0,sizeof(buf));
	printf("input data to file: ");
	fgets(buf,sizeof(buf),stdin);
	//fputs(buf,fp);
	ret = fwrite(buf,sizeof(buf),1,fp);
	printf("number of the writer to file = %d \n",ret);
	printf("the string is %s \n",buf);
	fclose(fp);
	return 0;
}
