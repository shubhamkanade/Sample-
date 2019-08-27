#include<stdio.h>
int main()
{
	int no=0;
	
	printf("Enter Number\n");
	scanf("%d",&no);
		
	if(no%2==0)
	{
		printf("In if\n");
		goto label1;
	}
	else
	{
		label1:
		printf("In else\n");
	}
return 0;
}
