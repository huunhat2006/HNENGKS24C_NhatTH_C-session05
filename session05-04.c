#include <stdio.h>

int main()
{
	int num,core;
	printf("Moi ban nhap 1 so bat ky tu 1 den 10:");
	scanf("%d",&num);
	for (int i = 1;i <=10;i ++)
	printf("%d * %d = %d\n",num,i,num * i);
	 
	return 0;

 }

