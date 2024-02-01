#include <stdio.h>
int findMax(int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int findMin(int arr[], int n){
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[100], n, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    max = findMax(arr, n);
    min = findMin(arr, n);

    printf("The maximum element is %d.\n", max);
    printf("The minimum element is %d.\n", min);

    return 0;
}
