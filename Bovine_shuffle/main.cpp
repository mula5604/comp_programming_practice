#include <iostream>
#include <vector>
#include <fstream>

int main() {
    std::ifstream fin("shuffle.in");
    std::ofstream fout("shuffle.out");

    int n{};
    fin >> n;

    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        fin >> a[i];
    }

    std::vector<int> cows(n + 1);
    for (int i = 1; i <= n; i++) {
        fin >> cows[i];
    }

    std::vector<int> reverse(n + 1);

    for (int i = 1; i <= n; i++) {
        reverse[a[i]] = i;
    }

    for (int j = 0; j < 3; j++) {
        std::vector<int> temp(n + 1);

        for (int i = 1; i <= n; i++) {
            temp[reverse[i]] = cows[i];
        }

        cows = temp;
    }

    for (int i = 1; i <= n; i++) {
        fout << cows[i] << '\n';
    }

    return 0;
}
