#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int add(){			//�ӷ�����
int x=rand()%100;
int z,w,k=100-x;
int y=rand()%k;		//�������100���ڵ���������������Ӳ���100
z=x+y;
printf("%d+%d=\n",x,y);
printf("��������:");
scanf("%d",&w);
if(z==w){			//�жϻش��Ƿ���ȷ
	printf("�ش���ȷ!\n\n");
	return 10;			//���ط���
}
else {
	printf("�ش����!��ȷ����:%d\n\n",z);
	return 0;

}
}

int jian(){			//��������
int x=rand()%100;	//������һ����
int z,w,k=x;
int y=rand()%k;		//�����ڶ�����С�ڵ�һ����
z=x-y;
printf("%d-%d=\n",x,y);
printf("��������:");
scanf("%d",&w);
if(z==w){			//�жϻش��Ƿ���ȷ
printf("�ش���ȷ!\n\n");
return 10;
}
else {printf("�ش����!��ȷ����:%d\n\n",z);
return 0;
}

}

int cheng(){		//�˷�����
int x=rand()%100;
int z,w;
int y=rand()%100;
z=x*y;
printf("%d*%d=\n",x,y);
printf("��������:");
scanf("%d",&w);
if(z==w){				//�жϻش��Ƿ���ȷ
	printf("�ش���ȷ!\n\n");
	return 10;
}
else {
	printf("�ش����!��ȷ����:%d\n\n",z);
	return 0;
}

}

int chu(){			//��������
int x=rand()%100;
int z,w;
int y=rand()%100;
z=x*y;				//���������������Ļ�
printf("%d/%d=\n",z,y);//��ʾ������һ����������֤�������ΪС��
printf("��������:");
scanf("%d",&w);
if(x==w){			//�жϻش��Ƿ���ȷ
	printf("�ش���ȷ!\n\n");
	return 10;
}
else {
	printf("�ش����!��ȷ����:%d\n\n",z);
	return 0;
}

}


void main(){

system("color 74");		//�ı��������������
srand(time(NULL));		//�����������
int i=0,m,f=0;
printf("��������Ҫ���������:");
scanf("%d",&m);
for(i;i<m;i++){			//ѭ�������Ŀ
	printf("��%d��:	",i+1);
	int s=rand()%3;
	switch(s){
	case 0:
		f+=add();break;
	case 1:
		f+=jian();break;
	case 2:
		f+=cheng();break;
	case 3:
		f+=chu();break;
	default:
		break;
}
}
printf("�ش���ȷ%d�⣬�÷֣�%d\n",f/10,f);	//������ȷ��Ŀ�ͷ���

}
