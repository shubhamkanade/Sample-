#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;

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
			/*else if(i==4)
			{
				for(l=1;l<=3;l++)
					printf("  ");
				for(l=4;l<=6;l++)
					printf("* ");
				break;
			}*/
			else if(i==7 || i==8)
                        {
                                for(m=1;m<=3;m++)
                                        printf("  ");
                                for(m=4;m<=6;m++)
                                        printf("* ");
				break;
                        }
			/*else if(i==7)
                        {
                                for(n=1;n<=3;n++)
                                        printf("  ");
                                for(n=4;n<=6;n++)
                                        printf("* ");
				break;
                        }*/
			else
			{
			printf("* ");
			}

		}
		printf("\n");
	}
	return 0;
}
