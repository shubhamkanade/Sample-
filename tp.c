#include<stdio.h>
void Pattern(int a[]);
int main()
{
	int i=0;
	int arr[]={1,2,3,4};
	for(i=0;i<2;i++)
	{
		Pattern(arr); // 1 2
	}
	return 0;
}
void Pattern(int brr[])
{
	static int j=0;
	for(j=0;j<2;j++)
	{
		printf("%d ",brr[j]);
	}
}
