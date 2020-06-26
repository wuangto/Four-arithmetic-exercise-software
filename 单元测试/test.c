#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "miniunit.h"


int add(){			//加法函数
int x=rand()%100;
int z,w,k=100-x;
int y=rand()%k;		//随机产生100以内的数，并且两个相加不到100
z=x+y;
printf("%d+%d=\n",x,y);
printf("请输入结果:");
scanf("%d",&w);
if(z==w){			//判断回答是否正确
	printf("回答正确!\n\n");
	return 10;			//返回分数
}
else {
	printf("回答错误!正确答案是:%d\n\n",z);
	return 0;

}
}

int jian(){			//减法函数
int x=rand()%100;	//产生第一个数
int z,w,k=x;
int y=rand()%k;		//产生第二个数小于第一个数
z=x-y;
printf("%d-%d=\n",x,y);
printf("请输入结果:");
scanf("%d",&w);
if(z==w){			//判断回答是否正确
printf("回答正确!\n\n");
return 10;
}
else {printf("回答错误!正确答案是:%d\n\n",z);
return 0;
}

}

int cheng(){		//乘法函数
int x=rand()%100;
int z,w;
int y=rand()%100;
z=x*y;
printf("%d*%d=\n",x,y);
printf("请输入结果:");
scanf("%d",&w);
if(z==w){				//判断回答是否正确
	printf("回答正确!\n\n");
	return 10;
}
else {
	printf("回答错误!正确答案是:%d\n\n",z);
	return 0;
}

}

int chu(){			//除法函数
int x=rand()%100;
int z,w;
int y=rand()%100;
z=x*y;				//先算出两个随机数的积
printf("%d/%d=\n",z,y);//显示积除于一个乘数，保证结果不会为小数
printf("请输入结果:");
scanf("%d",&w);
if(x==w){			//判断回答是否正确
	printf("回答正确!\n\n");
	return 10;
}
else {
	printf("回答错误!正确答案是:%d\n\n",z);
	return 0;
}

}


void main(){

system("color 74");		//改变输出背景和字体
srand(time(NULL));		//声明随机函数

printf("加法单元测试:\n");
for(int i = 0;i < 4;i++){
	mu_run_test(add);
	
}
mu_test_results();

printf("减法单元测试:\n");
for(int i = 0;i < 4;i++){
	mu_run_test(jian);
	
}
mu_test_results();

printf("乘法单元测试:\n");
for(int i = 0;i < 4;i++){
	mu_run_test(cheng);
	
}
mu_test_results();

printf("除法单元测试:\n");
for(int i = 0;i < 4;i++){
	mu_run_test(chu);
	
}
mu_test_results();

}