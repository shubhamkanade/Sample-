#include<stdio.h>
int add(int no1,int no2)
{
int ret=0;
printf("enter two numbers:");
scanf("%d%d",&no1,&no2);
ret=no1+no2;
printf("the addition is: %d",ret);
return ret;
}
