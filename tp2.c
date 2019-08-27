#include<stdio.h>

int main()
{

const int i=10;
int *ptr=&i;

printf("%d %d\n",*ptr,i);
*++ptr;
printf("%d %d",*ptr,i);
return 0;
}
