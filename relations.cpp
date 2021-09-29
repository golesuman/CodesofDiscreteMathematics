#include<stdio.h>
void reflexive(int a[],int sizeofA,int b[],int sizeofB)
{
	int i,j;
	bool test,hold=true;
	for(i=0;i<sizeofA;i++)
	{
		if(hold==true)

{
	for(j=0;j<sizeofB;j++)
	{
		if(b[j]==a[i])
		{
			hold=true;
			break;
		}
		else
		{
		hold=false;
		printf("Reflexive: No\n");
		break;
	}
}
}
	}
	
  if(hold==true)
{
	test=true;
	printf("Reflexive:Yes\n");
}
}

void symmetric(int a[],int sizeofA,int b[],int sizeofB)
{
	int i,j;
	bool test, hold=true;
	for(i=0;i<sizeofA;i++)
	{
		if(hold==true)
		{
			
			for(j=0;j<sizeofB;j++)
			{
				if(a[i]==a[j]&&a[i+1]==a[j-1])
				{
					hold=true;
					break;
				}
				else
				{
					hold=false;
					printf("Symmetric:No\n");
					break;
				}
			}
		}
	}
	if(hold==true)
	{
		test=true;
		printf("Symmetric:yes\n");
	}
}

void antisymmetric(int a[],int sizeofA,int b[],int sizeofB)
{
	int i,j;
	bool test, hold=true;
	for(i=0;i<sizeofA;i++)
	{
		if(hold==true)
		{
			for(j=0;j<sizeofB;j++)
			{
				if(a[i]<=b[j]&&b[j]<=a[i])
				{
					hold=true;
					break;
				}
				else
				{
					hold=false;
					printf("Antisymmetric: No\n");
					break;
				}
			}
			
		}
	}
	if(hold==true)
	{
		test=true;
		printf("Antisymmetric: Yes\n");
	}
}

int main()
{
int set1[4]={0,1,2,3};
int set2[8]={0,0,1,1,2,2,3,3};
reflexive(set1,3,set2,4);
antisymmetric(set1,3,set2,4);
symmetric(set1,3,set2,4);

}
