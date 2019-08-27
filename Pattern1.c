#include<stdio.h>
void Pattern(char);
int main()
{
	char arr[]="SK";
	int i=0;
	char ch;
	for(i=0;i<2;i++)
	{
		ch=arr[i];
		Pattern(ch);
	}
	return 0;
}	
void Pattern(char ch)
{	
	int i=0,j=0,k,l,m;
	if(ch=='K')
	{	
		for(i=1;i<=12;i++)
		{
			for(j=1;j<=9;j++)
			{

				if((i==1&&j==1)||(i==1&&j==2)||(i==1&&j==9))
				{
					printf("*");
					//printf("Inside if");
				}
				else if((i==2&&j==1)||(i==2&&j==2)||(i==2&&j==9)||(i==2&&j==8))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==3&&j==1)||(i==3&&j==2)||(i==3&&j==7)||(i==3&&j==8))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==4&&j==1)||(i==4&&j==2)||(i==4&&j==6)||(i==4&&j==7))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==5&&j==1)||(i==5&&j==2)||(i==5&&j==6)||(i==5&&j==5))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==6&&j==1)||(i==6&&j==2)||(i==6&&j==5)||(i==6&&j==4))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==7&&j==1)||(i==7&&j==2)||(i==7&&j==3)||(i==7&&j==4))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==8&&j==1)||(i==8&&j==2)||(i==8&&j==4)||(i==8&&j==5))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==9&&j==1)||(i==9&&j==2)||(i==9&&j==5)||(i==9&&j==6))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==10&&j==1)||(i==10&&j==2)||(i==10&&j==6)||(i==10&&j==7))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==11&&j==1)||(i==11&&j==2)||(i==11&&j==7)||(i==11&&j==8))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else if((i==12&&j==1)||(i==12&&j==2)||(i==12&&j==9)||(i==12&&j==8))
				{
					printf("*");
					//printf("Inside elseif");
				}
				else 
					printf(" ");
			}
			printf("\n");
		}
	}
	//int i,j,k,l,m,n;
	if(ch=='S')
	{
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=6;j++)
			{
				if(i==3 || i==4)
				{
					for(k=1;k<=3;k++)
						printf("* ");
					for(k=4;k<=6;k++)
						printf("  ");
					break;
				}
				else if(i==7 || i==8)
				{
					for(m=1;m<=3;m++)
						printf("  ");
					for(m=4;m<=6;m++)
						printf("* ");
					break;
				}
				else
				{
					printf("* ");
				}

			}
			printf("\n");
		}
	}
}

