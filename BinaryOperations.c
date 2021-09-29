//program to implement binary integer addition,multiplication and division
#include<stdio.h>
#include<math.h>
int binAddition(int a,int b)
{
	int carry; 
      while (b != 0) {
              //find carry and shift it left
              carry = (a & b) << 1;
              //find the sum
              a=a^b;
              b=carry;
      }
      return a;
}
int binMultiplication(int a,int b)
{
	int i,res=0;
	for(i=0;i<b;i++)
	{
		res=binAddition(res,a);
	}
	return res;
}
int binDivision(int a,int b)
{
	int i,res,count=0,twoscomp;
	if(a<b)
	{
		printf("\nDivision of a and b is 0\n");
	}
	res==a;
	twoscomp=binAddition(~b,1);
	for(i=0;res>0;i++)
	{
		res=binAddition(res,twoscomp);
		if(res<=0)
		{
		if(res==0)
		count=binAddition(count,1);
		break;
			
		}
		else
		{
			count=binAddition(count,1);
		}
	}
	return count;
}
int main()
{
	int a,b;
	printf("Enter first binary integer= ");
	scanf("%d",&a);
	printf("Enter second binary integer= ");
	scanf("%d",&b);
	printf("\n Binary Addition of %d and %d is %d\n",a,b,binAddition(a,b));
	printf("\n Binary Multiplication of %d and %d is %d\n",a,b,binMultiplication(a,b));
	printf("\n Binary Division of %d and %d is %d\n",a,b,binDivision(a,b));
	return 0;
}
