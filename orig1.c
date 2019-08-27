#include<stdio.h>
int  main()
{
	int i=0,j=0;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==1 || i==3 || i==5)
				printf("*");
			else if((i==2&&j==1)||(i==4&&j==3))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
