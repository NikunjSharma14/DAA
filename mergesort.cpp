//Merge sort
#include <iostream>
using namespace std;

//Declaring 1st array to check
void merge(int arr[], int left, int mid, int right) {   
    int left_size = mid - left + 1;
    int right_size = right - mid;
    int left_half[left_size];
    int right_half[right_size];
    int i, j, k;

    for (i = 0; i < left_size; i++) {               //looping condition to get terminated 
        left_half[i] = arr[left + i];
    }
    for (j = 0; j < right_size; j++) {            
        right_half[j] = arr[mid + 1 + j];
    }

    i = j = 0;
    k = left;

    while (i < left_size && j < right_size) {
        if (left_half[i] <= right_half[j]) {
            arr[k] = left_half[i];
            i++;
        } else {
            arr[k] = right_half[j];
            j++;
        }
        k++;
    }

    while (i < left_size) {
        arr[k] = left_half[i];
        i++;
        k++;
    }

    while (j < right_size) {
        arr[k] = right_half[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
