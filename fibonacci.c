#include<stdio.h>
int Add(int iNo)
{
	static int iSum=0;
	/*while(iNo!=0)
	{
		iSum=iSum+(iNo%10);
		iNo/=10;
	}*/
	//return iSum;

	if(iNo!=0)
	{
		iSum=iSum+(iNo%10);
		iNo/=10;
		Add(iNo);		
	}

	return iSum;
}
int main()
{
	 int i=0;
        printf("Enter n \n");
        scanf("%d",&i);
        printf("%d ",Add(i));
return 0;
}	
