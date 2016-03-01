/* 此程序的功能是随意输入一个数字，然后求乘积
   写程序的时间是：2016/1/29
   写者：sxn*/

#include<stdio.h>
int main()
{
	int aNumber;     //此变量是输入的那个数
	int result=1;    // 此变量是用来存储积
	int i;
	printf("please input a number !");
	printf("\n");
	scanf("%d",&aNumber);
	for(i=1;i<=aNumber;i++)
		result*=i;
	printf("The Result Is :%d",result);
	printf("\n");
	return 0;
}