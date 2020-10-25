#include "week3.h"

int main(void)
{
	FILE *fp;
	fp = fopen("./ftest.txt","r");
	printf("fd = %d\n",fp->_fileno);
	fclose(fp);
	return 0;
}
