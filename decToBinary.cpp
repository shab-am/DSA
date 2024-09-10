#include <iostream>
using namespace std;
void decToBinary(int decimal) {
    int result = 0;
    int power = 1;
    while (decimal > 0) {
        int remainder = decimal % 2;
        decimal /= 2;
        result += remainder * power;
        power *= 10;
    }
    cout << "Binary form of " << decimal << " is " << result << endl;
}
int main() {
    int decimal;
    cout << "Enter the decimal number: " << endl;
    cin >> decimal;
    decToBinary(decimal);
    return 0;
}