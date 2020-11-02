#include"my.h"

void input(users *u){	
	memset(u, 0, sizeof(users));
	printf("please input userid:\n");
	scanf("%d",&u->id);	
	printf("please input name(Start with a capital letter, 1 to 8 digits):\n");
	scanf("%s",u->name);	
	printf("please input htel(Area code-seat number):\n");
	scanf("%s",u->htel);	
	printf("please input tel:\n");
	scanf("%s",u->tel);
}


void save(users *u,char* file){
	FILE * fp = fopen(file, "a+");
	if(NULL == fp)
	{
		err_exit("file open false\n");
	}
	
	users tmp = {0};

	//判断是否存在
	fseek(fp, 0L, SEEK_SET);

	//fscanf(fp,"%d\t%s\t%s\t%s\n", &tmp.id, tmp.name,tmp.htel, tmp.tel);	
	while(!feof(fp))
	{
		fscanf(fp,"%d\t%s\t%s\t%s\n", &tmp.id, tmp.name,tmp.htel, tmp.tel);	
		if(tmp.id == u->id)
		{
			printf("id:%d is exist,add failed\n", u->id);
			return;
		}
		
	}
	fprintf(fp,"%d\t%s\t%s\t%s\n", u->id, u->name, u->htel, u->tel);

	fclose(fp);
	return;
}


void output(users *u, size_t num)
{
	//打印表头
	printf("userid\t\tname\t\thtel\t\ttel\n");
	for(int i = 0; i < num; i++){
		printf("%d\t%s\t%s\t%s\n", u[i].id, u[i].name, u[i].htel, u[i].tel);	
	}
}

users * readAll(char* file){
	FILE *fp = fopen(file, "r");
	if(NULL == fp)
	{
		err_exit("readAll func open file false");
	}
	users *ulist = (users*)malloc(sizeof(users)*MAX_LIST);

	//判断是否存在
	fseek(fp, 0L, SEEK_SET);
	int i = 0;
	while(!feof(fp))
	{
		fscanf(fp,"%d\t%s\t%s\t%s\n",&ulist[i].id,ulist[i].name,ulist[i].htel,
			ulist[i].tel);
		i++;
	}
	data_size = i;
	fclose(fp);
	return ulist;
}



int asc(const void* str1, const void* str2){
	return strcmp((const char*)((users *)str1)->name,
			(const char *)((users *)str2)->name);
}
int desc(const void *str1, const void* str2){
	return -1 * asc(str1, str2);
}

void mysort(users *u, size_t num, int type){
	if(ASC == type){
		qsort(u, num, sizeof(users), asc);
	}
	else if(DESC == type){
		qsort(u, num, sizeof(users), desc);
	}
	else{
		err_exit("mysort is error\n");
	}
}

void randdat(users *u){
	static int isSrand = 0;
	if(!isSrand){
		srand(time(0));
		isSrand = 1;
	}
	memset(u,0,sizeof(users));
	//生成随机的id
	u->id = rand(); 
	//生成首字母大写的Name
	int len = rand() % 8;
	if(len < 3){ len = 3;}
	
	for(int i = 0; i < len; i++)
	{
		u->name[i] = 'a' + (rand() % 26);
	}
	u->name[0] += ('A' - 'a');

	//生成htel和tel
	for(int i = 0; i < 11; i++)
	{
		u->htel[i] = rand() % 10 + '0';
		u->tel[i] = rand() % 10 + '0';
	}
	u->htel[4] = '-';
	u->tel[0] = '1';
}
