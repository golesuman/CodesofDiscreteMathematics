#include<stdio.h>
void printUnion(int arr1[],int arr2[],int len1,int len2)
{
    int arr3[60],i,j,k=0,f;
    for(i=0;i<len1;i++)
    {
        arr3[k]=arr1[i];
        k++;
    }
    for(i=0;i<len2;i++)
    {
        f=0;
        for(j=0;j<len1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                f=1;
            }
        }
        if(f==0)
        {
            arr3[k]=arr2[i];
            k++;
        }
    }
    printf("The union is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d",arr3[i]);
    }
}
void printIntersection(int arr1[],int arr2[],int len1,int len2)
{
    int arr3[60],i,j,k=0;
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[k]=arr1[i];
                k++;
            }
        }
    }
    printf("The intersection of two sets is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d",arr3[i]);
    }

}
void printCartesianProduct(int arr1[],int arr2[],int len1,int len2)
{
    int i,j;
    printf("{");
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            printf("(%d,%d),",arr1[i],arr2[j]);
        }
    }
    printf("}");
}
int main()
{
    int arr1[30],arr2[30],i,j,s1,s2;
    printf("Enter the size of 1 st array:");
    scanf("%d",&s1);
    printf("Enter the elements of array1:\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of 2nd array:");
    scanf("%d",&s2);
    printf("Enter the elements of array2:\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d\n",&arr2[i]);
    }
    printUnion(arr1,arr2,s1,s2);
    printIntersection(arr1,arr2,s1,s2);
    printCartesianProduct(arr1,arr2,s1,s2);
}
