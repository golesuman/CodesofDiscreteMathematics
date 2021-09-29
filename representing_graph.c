//represent graph
#include<stdio.h>
int vertarr[20][20];  //adjacency matrix initially 0
int count=0;
void displayMatrix(int v)
{
	printf("\n\nAdjacency matrix\n\n");
	int i,j;
	printf(" \t");
	for(i=0;i<v;i++)
	printf("%d\n",i);
	printf("\n\n");
	for(i=0;i<v;i++)
	{printf("%d\t",i);
		for(j=0;j<v;j++)
	printf("%d\t",vertarr[i][j]);
	printf("\n");
}
}
void add_edge(int u,int v) //function to add edge into the matrix
{
	vertarr[u][v]=1;
	vertarr[v][u]=1;
}

int main()
{
int v,n,m;
char ch='y';
printf("Note:Vertices no. starts from 0 and ranges to input v-1\n");
printf("Enter the no. of vertices in the graph:");
scanf("%d",&v);
while(ch=='Y'||ch=='y')
{
	printf("Enter the two vertices to form an edge:\n");
	scanf("%d %d",&n,&m);
	if(n>=v||m>=v)
	{
		printf("\nInvalid input!!\n\n");
		continue;
	}
	add_edge(n,m);
	printf("\nDo you want to input more edges?Y/N:\t");
	scanf("%c",&ch);
}
displayMatrix(v);
}
