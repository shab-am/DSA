#include <iostream>
using namespace std;
int fibonacci(int num) {
    if(num <= 1)    return num;
    int a=0, b=1, nextTerm;
    for (int i=2; i<=num; i++) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return b;
}
int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "The "<< num << "th fibonacci number is " << fibonacci(num) << endl;
    return 0;
}