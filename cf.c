/* �˳���Ĺ�������������һ�����֣�Ȼ����˻�
   д�����ʱ���ǣ�2016/1/29
   д�ߣ�sxn*/

#include<stdio.h>
int main()
{
	int aNumber;     //�˱�����������Ǹ���
	int result=1;    // �˱����������洢��
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