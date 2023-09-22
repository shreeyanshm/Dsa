#include<stdio.h>

int main(){
    int arr[100];
    int i, j,n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<n ;i++){
        j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("Sorted Array: \n");
    for(i=0; i<n; i++){
        printf("%d  ", arr[i]);
    }
    printf("\nShreeyansh Mittal");
    return 0;
}