#include<stdio.h>
extern int add(int,int);
int main()
{
int x=0,y=0,ans=0;
printf("enter the first element");
scanf("%d",&x);
printf("enter the second number");
scanf("%d",&y);
ans=x+y;
printf("the addition of two no is:%d",ans);
int add();
return 0;
}
