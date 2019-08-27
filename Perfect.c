#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Perfect(int iNo)
{
int iSum=0;
for(int i=1;i<=(iNo/2);i++)
{
i(
}
}
int main()
{
	int iNum1=0;
	BOOL bRet;

	printf("ENter a number");
	scanf("%d",&iNum1);

	bRet=Perfect(iNum1);
	if(bRet==TRUE)
	{
		printf("It is an perfect number\n");
	}
	else
	{
		printf("It is an perfect number\n");
	}
	return 0;
}
