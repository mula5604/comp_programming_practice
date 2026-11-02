#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n{};
    std::cin >> n;

    std::vector<int> p(n);

    for (int i{}; i < n; ++i) {
        std::cin >> p[i];
    }

    int c{n};

    for (int i{}; i < n; ++i) {
        int avg{};
        int sum{};

        std::vector<int> temp;
        temp.push_back(p[i]);
        sum += p[i];

        for (int j{i+1}; j<n; ++j) {
            temp.push_back(p[j]);
            sum += p[j];

            if (sum % temp.size() == 0) {
                avg = sum / temp.size();

                if (std::find(temp.begin(), temp.end(), avg) != temp.end()) {
                    c++;
                }
            }
        }
    }

    std::cout << c;

    return 0;
}
