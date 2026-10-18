#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k, t;
    std::cin >> n >> k >> t;

    std::vector<int> a(n);

    for (int i{}; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int i = 0;
    int counter = 0;
    int end = 0;
    int aoki = 0;

    while (i < t) {
        if (aoki < n && a[aoki] == i) {
            end = i + k;
            aoki += 1;
        }
        else if (i >= end) {
            counter += 1;
            end = i + k;
        }

        if (end >= t) {
            break;
        }

        if (aoki < n && a[aoki] <= end) {
            i = a[aoki];
        }
        else {
            i = end;
        }
    }

    std::cout << counter << '\n';

    return 0;
}
