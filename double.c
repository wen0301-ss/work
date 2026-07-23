#include <stdio.h>
int main()
{
	printf("请输入几英尺几寸\n");
	double a;
	double b;
	scanf("%lf %lf",&a,&b);
	printf("身高是%f米",(a+b/12)*0.3048);
	return 0;
}
