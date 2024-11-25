#include <stdio.h>

int main()
{
	int num1,num2,temp1,temp2,ucln; 
	printf("Moi ban nhap gia tri cho so thu nhat");
	scanf("%d",&num1);
	printf("Moi ban nhap gia tri cho so thu hai");
	scanf("%d",&num2);
	
	temp1 = num1;
    temp2 = num2;

    while (temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    ucln = temp1; 

    printf("Uoc chung lon nhat cua 2 so ban nhap la: %d\n",ucln);
 
	 return 0;

 }

