#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{

	char arr[]="123";
	int num=0,iCnt=0,i=0;
	iCnt=strlen(arr)-1;
	//printf("   %d  ",iCnt);
	while(iCnt>=0)
	{	//num=arr[i]+48;
		num=arr[i]+48*pow(10,iCnt);
		i++;
		iCnt--;
	}		

	printf("%d",num);
}

