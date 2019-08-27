#include<stdio.h>

int main()
{
	 int i,iCnt=0,j=0,iDigit,iNo=0;

	printf("enter the number to convert into string:");
	scanf("%d",&i);
//	int i,iCnt=0,j=0,iDigit,iNo=0;

	iNo=i;

	while(i!=0)
	{
		iCnt++;
		i=i/10;
	}

	char arr[iCnt+1];

	arr[iCnt]='\0';

	for( j=iCnt-1;j>=0;j--)
	{
		iDigit=iNo%10;
		arr[j]=iDigit+48;
		iNo=iNo/10;
	}

	printf("%s",arr);
	return 0;
}
