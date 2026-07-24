#include <stdio.h>

int main()
{
	int amount;
	int price;
	printf("请输入支付价钱\n");
	scanf("%d",&amount); 
	printf("请输入商品金额！\n");
	scanf("%d",&price);
	int change=amount- price;
	if(change>0){
	
	printf("找你%d元",change);
	return 0;
}else{
	printf("你的钱不够\n");
}
	
}
