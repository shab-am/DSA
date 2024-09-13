#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size -1;
    int temp = 0;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed Array: " << endl;
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) 
        cin >> arr[i];

    reverseArray(arr, size);

    return 0;
}