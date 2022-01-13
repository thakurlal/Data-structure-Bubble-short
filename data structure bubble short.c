#include<stdio.h>
void main()
{
	int  i,j,n,a[100],temp;
	printf("enter the no. of term");
	scanf("%d",&n);
	printf(" enter %d elements",n);
	for(i=0;i<n;i++)
	
		scanf("%d",a[i]);
		{
			for(i=0;i<n;i++)
		{
			for(j=0;i<n;j++)
			{
			if(a[i]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
			}
		}
	}}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	
	}}

