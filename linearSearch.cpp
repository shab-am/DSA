#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {

    for (int i = 0; i < size; i++) 
        if (arr[i] == key)
            return i;
    
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    
    int key;
    cout << "Enter the search element: " << endl;
    cin >> key;

    int index = linearSearch(arr, size, key); 

    if(index == -1) 
        cout << "Given element is not present in the array" << endl;
    else 
        cout << key << " has been found at index " << index << endl;
    
    return 0;
}