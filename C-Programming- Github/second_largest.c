#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1;

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    if(second == -1) {
        printf("Second largest does not exist");
    }
    else {
        printf("Second largest element = %d", second);
    }

    return 0;
}