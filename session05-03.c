#include <stdio.h>

int main()
{
	// khai bao bien 
	int n;
	int sum =0;
	// nhap gia tri cho n
	printf("Nhap so nguyen duong n:");
	scanf("%d", &n);
	// xu ly tinh toan 
	for(int i=0; i<=n; i++){
		 sum = sum + i;
		 printf("Lan lap thu %d, ket qua la: %d\n", i+1, sum); 
	} 
	printf(" ket qua la:%d",sum); 
	return 0;

 }

