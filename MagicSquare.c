#include<stdio.h>
int main()
{
	int i,j,n,k=1,l;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		a[i][j]=0;
	}
	i=n/2,j=n-1;
	for(l=0;l<n*n;l++)
	{
		a[i][j]=k++;
		i=i-1;
		j=j+1;
		 csk:
		if(i==-1&&j==n)
		{
			i=0;
			j=n-2;
		}
		if(i==-1)
		i=n-1;
		if(j==n)
		j=0;
		if(a[i][j]!=0)
		{
			i=i+1;
			j=j-2;
			goto csk;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
