#include<stdio.h>
int main()
{

int allocation[5][5],max[5][5],remaning[5][5],running[5];
int i,j,n,r,counter,sum=0,sum1=0;
printf("Number of process:");
scanf("%d",&n);
printf("Number of Recourse:");
scanf("%d",&r);
for(i=0;i<n;i++)
{
	running[i]=1;
	counter++;
}
printf("Enter Allocated Resourse table\n");
for (i=0;i<n;i++)
{
	for(j=0;j<r;j++)
	{
		scanf("%d",&allocation[i][j]);
			}
}
printf("Enter Maximum Need table\n");
for (i=0;i<n;i++)
{
	for(j=0;j<r;j++)
	{
		scanf("%d",&max[i][j]);
			}
}
printf("Enter Remaning  table\n");
for (i=0;i<n;i++)
{
	for(j=0;j<r;j++)
	{
		remaning[i][j]=max[i][j]-allocation[i][j];
			printf("%d\n",remaning[i][j]);
			}
}
printf("======Allocation Resorse======\n");
	for(i=0; i<r; i++) 
	{
		for(j=0;j<r;j++)
		{
			printf("\t%d", allocation[i][j]);
    	}
    	printf("\n");
    }
    printf("======Maximum Need Resorse======\n");
	for(i=0; i<r; i++) 
	{
		for(j=0;j<r;j++)
		{
			printf("\t%d", max[i][j]);
    	}
    	printf("\n");
    }
    printf("======Remaning Resorse======\n");
	for(i=0; i<r; i++) 
	{
		for(j=0;j<r;j++)
		{
			printf("\t%d", remaning[i][j]);
    	}
    	printf("\n");
    }
    printf("=Available is==\n");
    for(i=0;i<n;i++)
    {
    		sum=sum+allocation[i][0];
	}
	printf("%d",sum);
	for(j=0;j<n;j++)
    {
    		sum1=sum1+allocation[1][j];
	}
	printf("\t%d",sum1);
}
