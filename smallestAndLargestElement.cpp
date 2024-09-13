#include<iostream>
#include<climits>
using namespace std;
int main() {
    int size;

    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0; i < size; i++) {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "The largest element in the array is " << largest << endl;
    cout << "The smallest element in the array is " << smallest << endl;

    return 0;
}