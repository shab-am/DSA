#include <iostream>
using namespace std;
void binaryToDec(int binary) {
    int result = 0, power = 1;
    while (binary > 0) {
        int remainder = binary % 10;
        result += remainder * power;
        binary /= 10;
        power *= 2;
    }
    cout << "Decimal form of " << binary << " is " << result << endl;
}

int main() {
    int binary;
    cout << "Enter the binary number: " << endl;
    cin >> binary;
    binaryToDec(binary);
    return 0;
}