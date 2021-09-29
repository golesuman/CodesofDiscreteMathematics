//program to implement fuzzy set operations
#include<stdio.h>
#include<math.h>
int main()
{
	float a[5]={0.1,0.4,0.6,0.7,0.9};
	float b[5]={0.0,0.2,0.4,0.9,1.0};
	int i;
	printf("\nGiven sets are: \n");
	printf("\tSet A: {");
	for(i=0;i<5;i++)
    {
    	printf("%f",a[i]);
		printf(" , ");
	}
	printf(" } \n\n");
		printf("\tSet B: {");
	for(i=0;i<5;i++)
    {
    	printf("%f",b[i]);
		printf(" , ");
	}
	printf(" } \n\n");
	printf("Fuzzy union of a and b = { ");
	for(i=0;i<5;i++)
	{
		printf("%f",(a[i]>b[i])?a[i]:b[i]);
		printf(" , ");
	}
	printf(" } \n\n");
	printf("Fuzzy intersection of a and b = { ");
	for(i=0;i<5;i++)
	{
		printf("%f",(a[i]<b[i])?a[i]:b[i]);
		printf(" , ");
	}
	printf(" } \n\n");
	printf("Fuzzy complement of set A = { ");
	for(i=0;i<5;i++)
	{
		printf("%f",1-a[i]);
		printf(" ");
	}
	printf(" } \n\n");

	printf("FUzzy concentration of  set A = { ");
	for(i=0;i<4;i++)
	{
		printf("%f",pow(a[i],2));
		printf(" , ");
		
	}
	printf(" } \n\n");
	printf("Fuzzy Dialation of Set B = {");
	for(i=0;i<5;i++)
	{
		printf("%f",sqrt(b[i]));
		printf(" , ");
		
	}
	printf(" } \n\n");
	printf("Fuzzy difference of A and B = {");
	for(i=0;i<5;i++)
	{
		printf("%f",(a[i]<(1-b[i]))?a[i]:(1-b[i]));
		printf(" , ");
		
	}
	printf(" }\n\n");
	return 0;
	
	
}
