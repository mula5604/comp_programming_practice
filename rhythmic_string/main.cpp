#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int t{};
    std::cin>>t;

    for (int k{};k<t;++k){
        int n{};
        std::cin >> n;

        std::vector<long long> a(n);

        for (int i{}; i < n; ++i) {
            std::cin >> a[i];
        }

        int my_max{};

        for (int i{}; i < n; ++i) {
            int c{};

            for (int j{}; j < n; ++j) {
                if (a[j] % a[i] == 0) {
                    ++c;
                }
            }

            my_max = std::max(my_max, c);
        }

        std::cout << n - my_max << '\n';
    }

    return 0;
}
