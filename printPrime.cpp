#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num == 0 || num == 1)   return false;
    for (int i=2; i<num; i++) {
        if(num%i == 0) return false;
    }
    return true;
}
void printPrime(int start, int end) {
    for(int i=start; i<=end; i++) {
        if(isPrime(i))
            cout << i << endl;
    }
    cout << endl;
}
int main() {
    int start, end;
    cout << "Enter the starting number: " << endl;
    cin >> start;
    cout << "Enter the ending number: " << endl;
    cin >> end;
    cout << "Prime numbers in the range of " << start << " and " << end << " are: " << endl;
    printPrime(start, end);
    return 0;
}