#include <stdio.h>
 int main()
 {
 	int grade;
 	printf("请输入成绩\n");
 	scanf("%d",&grade);
 	grade/=10;
 	switch (grade){
 		case 10:
 		case 9:
 		printf("等级为a\n");
 		break;
 		case 8:
 		printf("等级为b\n");
 		break;
 		case 7:
		 printf("等级为c\n");
 		break;
 		case 6:
 		printf("等级为d\n");
 		default:
 		printf("等级为e\n");
 		break;
		  
 	}
 	return 0;
 }
