#include<stdio.h> 

int addition(int,int);

int main()
{
	int iValue1,iValue2,iRet;

	int iResult=0;

	printf("enter the two numbers:");
	scanf("%d%d",&iValue1,&iValue2);

	printf("%d",addition( iValue1,iValue2));

	return 0;
}

int addition(int no1,int no2)
{
	return no1+no2;
}


