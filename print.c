#include<stdio.h>
void fun(int iNo)
{
	static int i=0;  //preserve the value across function
	if(i<iNo)
	{
		printf("* ");	
		i++;
	fun(iNo);
	}

}
int main()
{
	int i=0;
	printf("Enter n \n");
	scanf("%d",&i);
	fun(i);
return 0;
}
