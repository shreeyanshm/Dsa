#include<stdio.h>

int main(){
    int arr[100];
    int i, j, temp, n, gap;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(gap=n/2; gap>0; gap/=2){
        for(i=gap;i<n;i++){
            temp=arr[i];
            for(j=i; j>=gap && arr[j-gap]>temp; j=j-gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
    }
    printf("Sorted Array");
    for(i=0; i<n;i++){
        printf("%d  ", arr[i]);
    }
    printf("\nShreeyansh Mittal");
}
