#include"test.h"
int main(void)
{	
	/*	
	//wen jian nei rong
	int fd = open("f3.txt",O_WRONLY|O_CREAT,0644);
	int ibuf[80]={5,1,2,3,4,5};
	char cbuf[80]="abbcccddddeeeee";
	
	write(fd,ibuf,sizeof(int)*6);
	write(fd,cbuf,sizeof(cbuf));
	close(fd);
	*/
		
	int fd2 = open("f3.txt",O_RDONLY);
	int n = 0;//total num
	int oibuf[80];
	char ocbuf[80]="0";
	read(fd2,&n,sizeof(int));

	int num=0;
        printf("There are %d data in the file\nRead the data:",n);
        scanf("%d",&num);

	read(fd2,oibuf,sizeof(int)*n);//every
	
	int jump=0;
	for(int i=0;i<num-1;i++)
		jump+=oibuf[i];
	lseek(fd2,4*(n+1)+jump,SEEK_SET);
	read(fd2,ocbuf,oibuf[num-1]);
	printf("%s\n",ocbuf);
	
	return 0;
}
