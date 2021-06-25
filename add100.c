//add 100 digits simultaneously
#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	printf("addition of 100 numbers are %d",sum);
}