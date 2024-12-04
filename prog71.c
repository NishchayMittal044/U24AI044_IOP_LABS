// Write a program in C to find the pivot element of a sorted and rotated array
// using binary search. Pivot element is the only element in input array which is
// smaller than its previous element. A pivot element divided a sorted rotated array
// into two monotonically increasing array.

#include <stdio.h>

// Function to find the pivot element
int findPivot(int arr[], int low, int high) {
    if (low > high) {
        return -1; // No pivot found
    }
    if (low == high) {
        return low; // Only one element left
    }

    int mid = (low + high) / 2;

    // Check if mid is pivot
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid + 1;
    }

    // Check if mid-1 is pivot
    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid;
    }

    // Decide whether to search in left or right half
    if (arr[low] >= arr[mid]) {
        return findPivot(arr, low, mid - 1);
    } else {
        return findPivot(arr, mid + 1, high);
    }
}

int main() {
    int n;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sorted and rotated array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find pivot
    int pivotIndex = findPivot(arr, 0, n - 1);

    if (pivotIndex == -1) {
        printf("No rotation detected. The array is sorted.\n");
    } else {
        printf("The pivot element is at index %d and its value is %d.\n", pivotIndex, arr[pivotIndex]);
    }

    return 0;
}
