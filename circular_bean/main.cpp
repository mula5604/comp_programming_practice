#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n;
    std::cin >> n;

    std::vector<int> r(n);

    for (int i{}; i < n; ++i) {
        std::cin >> r[i];
    }

    long long b = 1100000000;

    for (int i{};i < n;++i){
        long long sum{};
        for (int j{}; j<n;++j){
            int distance = (j - i + n) % n;
            sum += r[j] * distance;
        }
        b = std::min(b,sum);
    }
    std::cout<<b;
}
