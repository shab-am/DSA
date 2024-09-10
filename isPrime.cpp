#include <iostream>
using namespace std;
bool isPrime(int num) {
    bool res = true;
    for (int i=2; i<num; i++) {
        if(num%i == 0) res = false;
    }
    return res;
}
int main() {
    int num =10;
    if(isPrime(num))
        cout << num << "is a prime number" << endl;
    else 
        cout << num << " is not a prime number" << endl;
}