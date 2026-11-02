#include <iostream>
#include <unordered_map>
#include <algorithm>

int main() {

    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int n{};
    std::cin >> n;

    int x{};
    int y{};
    int t_total{};

    std::unordered_map<int, std::pair<int, int>> positions;

    positions[0] = {0, 0};

    for (int i = 0; i < n; ++i) {
        char compass{};
        int t{};

        std::cin >> compass >> t;

        for (int j = 0; j < t; ++j) {
            if (compass == 'N') {
                ++y;
            }
            else if (compass == 'S') {
                --y;
            }
            else if (compass == 'E') {
                ++x;
            }
            else {
                --x;
            }

            ++t_total;
            positions[t_total] = {x, y};
        }
    }
    int answer = -1;

    for (int i = 0; i <= t_total; ++i) {
        for (int j = i + 1; j <= t_total; ++j) {
            if (positions[i] == positions[j]) {
                int difference = j - i;

                if (answer == -1 || difference < answer) {
                    answer = difference;
                }
            }
        }
    }
    std::cout << answer << '\n';
    return 0;
}
