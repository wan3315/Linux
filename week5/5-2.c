#include"ch05.h"

int YorNques(char buf[])
{
	char ans;
	printf("%s",buf);
	scanf("%c",&ans);
	if(ans=='Y')
		return 1;
	else
		return 0;
}

int main(void)
{
	int ans;
	printf("1.this is a buf test program.");

	fprintf(stderr,"2.--test message\n");
	ans = YorNques("3.are you stuent?");
	if(ans==1)
		printf("4.high score");
	else
		printf("4.high salary");
	fprintf(stderr,"5.bye\n");
	return 0;
}
