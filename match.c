#include<stdio.h>
void print(char str1[],char str2[],char str3[])
{
	int i=0,j=0,k=0;
	while(str1[i]!='\0' && str2[j]!='\0' && str3[k]!='\0')
	{
		if((str1[i]<str2[j] && str1[i]<str3[k])||
				(str2[j]<str1[i] && str2[j]<str3[k])||
				(str3[k]<str2[j] && str3[k]<str1[i]))						
				{
					if(str2[i]<str1[j] && str2[i]<str3[k])
					{
						while(str2[j]!='\0')
						{		
							printf("%c",str2[j]);
							j++;
						}
					}
					else if(str1[i]<str2[j] && str1[i]<str3[k])
					{
						while(str1[i]!='\0')	
						{
							printf("%c",str1[i]);
							i++;
						}
					}
					else if(str3[i]<str2[j] && str3[i]<str3[k])
					{
						while(str3[k]!='\0')
                                                {
                                                        printf("%c",str3[k]);
                                                        k++;
                                                }
											

					}
				}
		else 
		break;
		/*else 
		{
			while(str1[i]!='\0')
			{
				printf("%c",str1[i]);
				i++;
			}
			while(str2[j]!='\0')
			{
				printf("%c",str2[j]);
				j++;
			}

		}*/

	}

}
int main()
{
	char arr[10],brr[20],crr[20];

	printf("ENter 1st string\n");
	scanf("%s",arr);

	printf("ENter 2nd string\n");
	scanf("%s",brr);
		
	printf("ENter 3rd string\n");
	scanf("%s",crr);
	
	print(arr,brr,crr);
	return 0;
}

