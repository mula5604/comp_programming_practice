#include <iostream>

int main() {

    int t{};
    std::cin >> t;

    for (int i{}; i < t; ++i) {
        long long l{};
        long long h{};

        std::cin >> l >> h;

        long long c = h - l + 1;
        long long sum = c * (l + h) / 2;
        int removed{};

        while (sum < l || sum > h) {
            if (sum > h) {
                sum -= h;
                --h;
            }
            else {
                sum -= l;
                ++l;
            }

            ++removed;
        }

        std::cout << removed << '\n';
    }

    return 0;
}
