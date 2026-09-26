#include <iostream>
#include <fstream>

int main() {

    std::ifstream fin("mixmilk.in");
    std::ofstream fout("mixmilk.out");

    int c1{}, m1{};
    int c2{}, m2{};
    int c3{}, m3{};

    fin >> c1 >> m1;
    fin >> c2 >> m2;
    fin >> c3 >> m3;

    for (int i{}; i < 100; i++) {

        if (i % 3 == 0) {
            if (m1 + m2 > c2) {
                m1 = m1 + m2 - c2;
                m2 = c2;
            }
            else {
                m2 += m1;
                m1 = 0;
            }
        }
        else if (i % 3 == 1) {
            if (m2 + m3 > c3) {
                m2 = m2 + m3 - c3;
                m3 = c3;
            }
            else {
                m3 += m2;
                m2 = 0;
            }
        }
        else {
            if (m3 + m1 > c1) {
                m3 = m3 + m1 - c1;
                m1 = c1;
            }
            else {
                m1 += m3;
                m3 = 0;
            }
        }
    }

    fout << m1 << '\n';
    fout << m2 << '\n';
    fout << m3 << '\n';

    return 0;
}
