#include<stdio.h>
int main()
{
	int s1,s2,i,j,a[5][5],b[5][5],join[5][5];
	printf("Enter the first matrix size\n");
	scanf("%d",&s1);
	printf("Elements of matrix:\n");
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s1;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter the second matrix size\n");
	scanf("%d",&s2);
	printf("Elements of matrix:\n");
	for(i=0;i<s2;i++)
	{
		for(j=0;j<s2;j++)
		scanf("%d",&b[i][j]);
	}
	//to find the join
	printf("Result of join:\n");
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
		join[i][j]=a[i][j] || b [i][j];
	printf("%d\t",join[i][j]);
	}
	printf("\n");
}
//for product
	printf("Result of product:\n");
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
		join[i][j]=a[i][j] && b [i][j];
	printf("%d",join[i][j]);
	}
	printf("\n");
}
}
