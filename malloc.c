//*1D array using malloc()/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n,i,sum=0;
	printf("enter the size");
	scanf("%d",&n);
	ptr=malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\n entered elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
		sum+=*(ptr+i);
	}
	printf("\nsum is:%d",sum);
}