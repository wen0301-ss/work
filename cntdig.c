#include <stdio.h>
int main()
{
	int n=0;
	int x;
	printf("请输入数字\n");
	scanf("%d",&x);
	do {
		x/=10;
		n++;
	}while(x>0);
	printf("该数为%d位数\n",n);
	return 0;
}
