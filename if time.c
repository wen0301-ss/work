#include <stdio.h>
 int main()
 {
 	int hour1,minute1;
 	int hour2,minute2;
 	printf("请输入两组几小时几分\n例如3小时20分输入3 20\n");
 	scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
 	int ih=hour2-hour1;
 	int im=minute2-minute1;
 	if(im<0){
	 im=im+60;
	 ih--;
 	}
 	printf("时间差为%d小时%d分\n",ih,im);
 	return 0;
 }
