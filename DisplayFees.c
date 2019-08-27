#include<stdio.h>
typedef unsigned int UINT;
UINT DisplayFees(UINT);
int main()
{
	UINT iStd=0,iRet=0;

	printf("ENter statndard");
	scanf("%d",&iStd);

	iRet=DisplayFees(iStd);
	if(iRet==0)
	{
		printf("Error:Invalid standard");
	}
	else
	{
		printf("Total fees is %d",iRet);
	}
	return 0;
}
UINT DisplayFees(UINT iValue)
{
	UINT iFees=0;

	switch(iValue)
	{
		case 4:iFees=25000;
		       break;
		case 5:iFees=15000;
		       break;
		case 6:
		case 7:iFees=22000;
		       break;
		case 8:iFees=32000;
		       break;
		case 9:
		case 10:iFees=31000;
			break;
		default:
			iFees=0;
	}
	return iFees;
}
