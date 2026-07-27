#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("我们来玩猜数游戏，限定数的范围是1-100，看看你要用多少次猜对吧\n");
	do{
		printf("请猜这个数是多少\n");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你的数猜大了\n");
		}
		if(a<number){
			printf("你的数猜小了\n");
		}
	}
	while(a!=number);
	printf("你用了%d次猜对了数字%d\n",count,number);
	return 0;

}
