#include <iostream>

using namespace std;

int main() {
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;

    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "max(a, b) = " << max(a, b) << '\n'
         << "min(a, b) = " << min(a, b) << "\n";
}