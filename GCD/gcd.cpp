#include <iostream>

int main() {
    int a, b;

    std::cout << "enter two numbers: ";
    std::cin >> a >> b;


    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    std::cout << "gcd: " << a << "\n";

    return 0;
}
