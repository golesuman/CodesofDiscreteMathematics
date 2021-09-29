//program to implement Eculidean algorithm
#include<stdio.h> 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main() 
{ 
   int a,b;
   printf("Enter the value of a= ");
   scanf("%d",&a);
   printf("\nEnter the value of b= ");
   scanf("%d",&b);
   printf("GCD of %d and %d is %d",a,b,gcd(a,b));
   printf("\n"); 
    return 0; 
} 
  

