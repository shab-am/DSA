#include <iostream> 
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    
    int sum = 0, product = 1;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of all the elements of the array: " << sum << endl;
    cout << "Produt of all the elements of the array: " << product << endl;

    return 0;        
}