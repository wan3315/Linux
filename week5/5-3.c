#include"ch05.h"
int main(void)
{
	char buf[20];
	int ret;
	FILE *fp=fopen("./tmp.txt","w+");
	if(!fp)
	{
		err_exit("open fail");
	}
	ret =fwrite("123",1,sizeof("123"),fp);
//	printf("%ld\n",sizeof("123"));
	printf("We write %d byte\n",ret);
	
	
	memset(buf,0,sizeof(buf));
	ret = fread(buf,1,1,fp);
	printf("We read %s ,ret is %d\n",buf,ret);
	fwrite("456",sizeof("456"),1,fp);
	fclose(fp);

	return 0;
}
