
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {

    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n{};
    std::cin >> n;

    std::vector<std::vector<int>> arr;

    for (int i{}; i < n; ++i) {
        std::string s;
        int low;
        int high;
        int num{};

        std::cin >> s >> low >> high;

        if (s == "on") {
            num = 1;
        }
        else if (s == "off") {
            num = 0;
        }
        else {
            num = 2;
        }

        std::vector<int> temp;
        temp.push_back(num);
        temp.push_back(low);
        temp.push_back(high);
        arr.push_back(temp);
    }

    int lower = 0;
    int upper = 1000000000;

    for (int i = n - 1; i >= 0; --i) {
        if (arr[i][0] == 1) {
            lower -= arr[i][2];
            upper -= arr[i][1];
            lower = std::max(lower, 0);
        }
        else if (arr[i][0] == 0) {
            lower += arr[i][1];
            upper += arr[i][2];
        }
        else {
            lower = std::max(lower, arr[i][1]);
            upper = std::min(upper, arr[i][2]);
        }
    }

    std::cout << lower << " " << upper << "\n";

    lower = 0;
    upper = 1000000000;

    for (int i{}; i < n; ++i) {
        if (arr[i][0] == 1) {
            lower += arr[i][1];
            upper += arr[i][2];
        }
        else if (arr[i][0] == 0) {
            lower -= arr[i][2];
            upper -= arr[i][1];
            lower = std::max(lower, 0);
        }
        else {
            lower = std::max(lower, arr[i][1]);
            upper = std::min(upper, arr[i][2]);
        }
    }

    std::cout << lower << " " << upper << "\n";

    return 0;
}
