#include<iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[], int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) 
                cout << arr2[j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int size1, size2;
    cout << "Enter the size of first array: " << endl;
    cin >> size1;
    cout << "Enter the size of second array: " << endl;
    cin >> size2;

    int arr1[size1], arr2[size2];
    cout << "Enter the elements of first array: " << endl;
    for (int i = 0; i < size1; i++) 
        cin >> arr1[i];
    
    cout << "Enter the elements of second array: " << endl;
    for (int i = 0; i < size2; i++) 
        cin >> arr2[i]; 

    printIntersection(arr1, arr2, size1, size2);

    return 0;
}