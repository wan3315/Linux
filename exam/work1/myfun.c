#include"my.h"

void input()
{
	struct user u;
	printf("please input id,name(1-8),htel(11),tel(11):\n");
	scanf("%d %s %s %s",&u.id,u.name,u.htel,u.tel);

	FILE* file = fopen("user.dat","a+");

	fwrite(&u,sizeof(struct user),1,file);
	fclose(file);
}
void output()
{
	struct user u;

	FILE* file = fopen("user.dat","r");
	
	printf("userid\tname\thtel\ttel\n");

	fread(&u,sizeof(struct user),1,file);
	while(!feof(file))
	{
		printf("%d\t%s\t%s\t%s\n",u.id,u.name,u.htel,u.tel);
		fread(&u,sizeof(struct user),1,file);
	}

	fclose(file);
}
