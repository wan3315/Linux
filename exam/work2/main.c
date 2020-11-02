#include "myfun.c"

int main(void)
{
	//用户输入
	/*
	users u;
	input(&u);
	save(&u,"user.dat");
	*/
	
	//输出文件信息
	
	users *ulist = (users*)malloc(sizeof(users)*MAX_LIST);
	ulist = readAll("user.dat");
	int num = data_size;
	output(ulist,num);
	
	/*
	//根据名字排序
	
	printf("升序排序后\n");
	mysort(ulist,num, ASC);
	output(ulist,num);
	printf("降序排序后\n");
	mysort(ulist, num, DESC);
	output(ulist,num);
	

	//测试randdate
	
	users u2;
	randdat(&u2);
	save(&u2);
	output(&u2,1);
	*/

	return 0;
}
