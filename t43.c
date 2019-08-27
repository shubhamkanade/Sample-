#include<stdio.h>

void fun(int i)
{
	if(i>5)fun(--i);
	printf("%d",i);

}
int main()
{
	fun(10);
}
