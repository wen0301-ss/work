#include <stdio.h>
 int main()
 {
 	printf("请输入两组几小时几分\n例如2小时15分输入为2 15"); 
 	int hour1,minute1;
 	int hour2,minute2;
 	scanf("%d %d",&hour1,&minute1);
 	scanf("%d %d",&hour2,&minute2);
 	int t1=hour1*60+minute1;
 	int t2=hour2*60+minute2;
 	int t3=t2-t1;
 	printf("时间差为%d小时 %d分",t3/60,t3%60);
 	return 0;
 	
 }
