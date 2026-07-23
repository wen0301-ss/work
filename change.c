#include <stdio.h>

int main()
{
	int amount;
	int price;
	printf("�������ܼ�Ǯ\n");
	scanf("%d",&amount); 
	printf("�������\n");
	scanf("%d",&price);
	int change=amount- price;
	printf("����%dԪ",change);
	return 0;
	
}
