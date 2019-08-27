#include<stdio.h>
void Pattern(char a[]);
int main()
{
	char arr[]="US";
	Pattern(arr);
	return 0;
}
void Pattern(char brr[])
{
	int i=0,j=0,k=0,l=0;
	
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=3;j++)
				{
					if(j==1 || j==3)
						printf("*");
					else if(i==5)
						printf("*");
					else
						printf(" ");	
				}
				printf("\n");
			}
		
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
		
}














































