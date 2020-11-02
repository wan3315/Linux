#include"test.h"
int main(void)
{
	struct iobuf{
		char buf[8];
		char other[80];
	}buffer;

	memset(&buffer,'\0',sizeof(struct iobuf));
	strcpy(buffer.other,"aaaaaaaaaaaaaaaaaaaaaaaa");
	printf("the other is: %s\n",buffer.other);

	gets(buffer.buf);

	printf("you input: %s\n",buffer.buf);
	printf("the other is: %s\n",buffer.other);

	return 0;
}
