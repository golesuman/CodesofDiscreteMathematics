//program to implement ceiling and floor function
#include<stdio.h>
#include<math.h>
int main()
{
	float n;
	printf("Enter any float value:");
	scanf("%f",&n);
	printf("\nCeling value of %f is %f",n,ceil(n));
	printf("\n Floor value of %f is %f",n, floor(n));
	return 0;
}
