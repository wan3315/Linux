#include"ch07.h"
static void __attribute__ ((destructor))after_main(void)
{
	printf("-----------after main-----------\n");
}
void callback1()
{
	printf("--------callBack1--------\n");
}
void callback2()
{
        printf("--------callBack2--------\n");
}
void callback3()
{       
        printf("--------callBack3--------\n");
}
int main()
{
	//退出性注册函数
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	while(1)
	{
		printf("-------running now--------\n");
		sleep(1);
	}
	printf("----------Program finished----------\n");

	return 0;
}
