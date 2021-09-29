#include <stdio.h>
// Recursive function to search x in arr[]
int elmntSearch(int arr[], int size, int x) {
	int rec;

	size--;

	if (size >= 0) {
		if (arr[size] == x)
			return size;
		else
			rec = elmntSearch(arr, size, x);
	}
	else
		return -1;

	return rec;
}

int main(void) {
	int arr[5];
	int i;
	printf("Enter the elements in the array:\n");
	for(i = 0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int size = sizeof(arr) / sizeof(arr[0]);

	int x;
	printf("Enter the element to be searched:\n");
	scanf("%d",&x);
	int indx;

	indx = elmntSearch(arr, size, x);

	if (indx != -1)
		printf("Element %d is present at %d", x, indx+1);
	else
		printf("Element %d is not present", x);

	return 0;
}

