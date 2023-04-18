#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random integer between 1 and 100
int rand_int() {
    return (rand() % 100) + 1;
}

// Function to print an array of integers
void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to perform insertion sort on an array of integers
void insertion_sort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    srand(time(0)); // Send the random number
    const int n = 10; // Number of elements in the array
    int arr[n];

    // Generate a random array of integers
    for(int i=0; i<n; i++) {
        arr[i] = rand_int();
    }

    cout << "Original array: ";
    print_array(arr, n);

    // Sort the array using insertion sort
    insertion_sort(arr, n);

    cout << "Sorted array: ";
    print_array(arr, n);

    return 0;
}