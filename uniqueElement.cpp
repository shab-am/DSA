#include<iostream> 
#include<climits>
using namespace std;

void findUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) { 
                isUnique = 0;
                break;
            }
        }
        if(isUnique) 
            cout << arr[i] << " ";
    }
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

    findUnique(arr, size);

    return 0;
}