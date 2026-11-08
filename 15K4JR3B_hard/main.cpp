
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int no_t{};
    std::cin >> no_t;

    for (int t{}; t < no_t; ++t) {
        int n{};
        std::cin >> n;

        std::vector<long long> a(n);

        for (int i{}; i < n; ++i) {
            std::cin >> a[i];
            a[i] = 1LL << a[i];
        }

        std::sort(a.begin(), a.end());
        std::reverse(a.begin(), a.end());

        long long sum1{};
        long long sum2{};

        for (int i{}; i < n; ++i) {
            if (sum1 <= sum2) {
                sum1 += a[i];
            } else {
                sum2 += a[i];
            }
        }

        std::cout << sum1 * sum2 << '\n';
    }

    return 0;
}
