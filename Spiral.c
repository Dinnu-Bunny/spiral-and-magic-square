#include<stdio.h>
int main()
{
	int n,i,j,k=1,r,q,s;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=i;j<=n-i-1;j++)
			a[i][j]=k++;
			for(q=i+1;q<=n-i-1;q++)
				a[q][n-i-1]=k++;
				for(r=n-i-2;r>=i;r--)
					a[n-i-1][r]=k++;
					for(s=n-i-2;s>i;s--)
						a[s][i]=k++;
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
