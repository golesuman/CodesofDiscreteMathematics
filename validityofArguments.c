#include<stdio.h>
int main()
{
	char table[9][8];
table[1][0]=table[2][0]=table[3][0]=table[4][0]='T';
table[5][0]=table[6][0]=table[7][0]=table[8][0]='F';
table[1][1]=table[2][1]=table[5][1]=table[6][1]='T';
table[3][1]=table[4][1]=table[7][1]=table[8][1]='F';
table[1][2]=table[3][2]=table[5][2]=table[7][2]='T';
table[2][2]=table[4][2]=table[6][2]=table[8][2]='F';

int i,j;
for(i=1;i<9;i++)
{
	if(table[i][0]=='T'&&table[i][1]=='F')
	table[i][3]='F';
	else
	table[i][3]='T';
}

for(i=1;i<9;i++)
{
	if(table[i][1]=='T'&&table[i][2]=='F')
	table[i][4]='F';
	else
	table[i][4]='T';
}
for(i=1;i<9;i++)
{
	if(table[i][3]=='T'&&table[i][4]=='T')
	table[i][5]='T';
	else
	table[i][5]='F';
}

for(i=1;i<9;i++)
{
	if(table[i][1]=='T'&&table[i][2]=='T')
	table[i][6]='T';
	else
	table[i][6]='F';
}

for(i=1;i<9;i++)
{
	if(table[i][5]=='T'&&table[i][6]=='T')
	table[i][7]='T';
	else if(table[i][5]=='F'&&table[i][6]=='F')
	table[i][7]='T';
	else
	table[i][7]='F';
}

printf("P\tQ\tR\tP->Q\tQ->R\t(P->Q)^(Q->R)\tQ^R\t(P->Q)^(Q->R)<=>(Q^R)\n");
for(i=1;i<9;i++)
{
	for(j=0;j<8;j++)
	{
		if(j==5||j==7)
		printf("\t");
		printf("%c",table[i][j]);
		printf("\t");
}
	printf("\n");
}



for(i=1;i<9;i++)
{
	if(table[i][7]=='T')
	continue;
	else
	break;
}
if(i==9)
printf("This is valid argument");
else
printf("This is not a valid argument");


}
