#include<stdio.h>
int main()
{

	int arr[3]={2,3,4};

	char *p;

	p=arr;
	//p=(char*)((int*)p);

	printf("%d\n",*p);
	//printf("%u\n",p);
	//printf("%u\n",p+1);
	p++;
	//p=(int*)(p+1);
	printf("%d\n",*p);
	printf("%u\n",p+1);
}


