#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	printf("请输入两个数字。\n例如5和3输入5 3\n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("交换后的数字为%d %d",a,b);
	return 0 ;
}
