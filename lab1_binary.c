#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
    return -1;
}

int main()
{
	int arr[] = { 2, 30, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
	int result = binarySearch(arr, 0, n - 1, x);
	if (result == -1){
        printf("Element is not present in array.");
    }
	else{
        printf("Element is present at index %d",result);
    }
    printf("\nTANMAY BANSAL");
	return 0;
}
