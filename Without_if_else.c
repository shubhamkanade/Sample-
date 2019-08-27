#include<stdio.h>
int main()
{

	{
		label4:
			printf("hello\n");
			exit(0);
	}

	if(2%2==0)
	{
		printf("In if\n");
		goto label4;
	}
	else
	{
		//label4:
		printf("In else\n");
	}
return 0;
}
