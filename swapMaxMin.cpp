#include<iostream> 
#include<climits>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    
    int largest = INT_MIN, smallest = INT_MAX;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            maxIndex = i;
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
            minIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swapping largest and smallest elements: ";
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
