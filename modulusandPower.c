#include<stdio.h>
#include<math.h>
int power(int a,int b,int n);
int mod(int y,int m);
int main()
{
    int a,b,n,m;
	printf("Enter the value of a,b ,power n and modulus m: ");
	scanf("%d%d%d%d",&a,&b,&n,&m);
     int y=power(a,b,n);
	printf("((%d^%d)*(%d^%d))%= %d",a,b,n,mod(y,m));
}
int power(int a,int b,int n)
{
	
	
	long y;
	y=(pow(a,n)*pow(b,n));
	
}
int mod(int y,int m)
{
	if(y<m)
	return y;
	else
	return mod(y-m,m);
}

