
// Sample code to perform I/O:
#include <stdio.h>
int factorial(int);
int main(void){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num); 
	int ret=factorial(num);
	   printf("%d",ret);
	return 0;                         // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here
int factorial(int n)
{
    int iFact=1;
        while(n)
        {
            iFact=iFact*n;
            n--;
        }
        return iFact;
}
