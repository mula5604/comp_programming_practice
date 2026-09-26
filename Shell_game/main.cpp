#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream fin("shell.in");
    std::ofstream fout("shell.out");

    int n{};
    fin >> n;

    std::vector<int> p(n);
    std::vector<int> p1(n);
    std::vector<int> guesses(n);

    for (int i{}; i < n; i++) {
        fin >> p[i] >> p1[i] >> guesses[i];
    }

    int mm{};

    for (int i{1}; i <= 3; i++) {
        int gm{};
        int x = i;

        for (int j{}; j < n; j++) {

            if (x == p[j]) {
                x = p1[j];
            }
            else if (x == p1[j]) {
                x = p[j];
            }

            if (x == guesses[j]) {
                gm++;
            }
        }

        mm = std::max(mm, gm);
    }

    fout << mm << '\n';

    return 0;
}
