#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LIST 100
#define ASC 0//升序
#define DESC 1//降序


int data_size=0;

void err_exit(char *s)
{
	printf("Usage : %s from-file to file\n",s);
	exit(1);
}

typedef struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
}users;


void input(users *u);

void save(users *u,char* file);

void output(users *u,size_t num);

users* readAll(char* file);

void mysort(users *u, size_t num, int type);

void randdat(users *u);


