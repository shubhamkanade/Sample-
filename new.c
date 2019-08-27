#include<stdio.h>
void Pattern(char[]);
int main()
{

	int i=0,j=0;
	char arr[]="UML";
	Pattern(arr);
	return 0;
}
void Pattern(char arr[])
{
	int i=0,j=0,k=0;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=18;j++)
		{
			if(arr[k]=='U')
			{
				//printf("In u");
				if(j>=1&&j<=7)
				{
					if(j==1 || j==6)
						printf("*");
					else if(i==5 && j<7)
						printf("*");
					else if(j==7)
						printf(" ");
					else
						printf(" ");	
				}
				//k++;
			}
			if(arr[k+1]=='M')
			{
				if(j>=8 && j<=13)
				{
					if((i==1&&j!=10)&&(i==1&&j<13))
						printf("*");
					else if(j==8 || j==12)
						printf("*");
					else if(i==2 && j==10)
						printf("*");
					else
						printf(" ");
				}
				//k++;
				//if(j>=14 && j	<=18)
				//printf("  ");
			}
			 if(arr[k+2]=='L')
                        {
                                if(j>=14 && j<=18)
                                {
                                       	if(j==14 || i==5)
						printf("*");
                                        else
                                                printf(" ");
                                }
                                //if(j>=14 && j<=18)
                                //printf("  ");
                        }
		}
		printf("\n");
	}
}

