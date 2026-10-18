#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
#include <cstdio>

bool check(std::string temp, std::vector<std::string>& duo) {
    return std::find(duo.begin(), duo.end(), temp) != duo.end();
}

std::string getTeam(std::string p) {
    std::string temp;

    for (int i{}; i < 3; ++i) {
        if (temp.find(p[i]) == std::string::npos) {
            temp += p[i];
        }
    }

    std::sort(temp.begin(), temp.end());

    return temp;
}

void horizontal(std::string p, std::vector<std::string>& solo, std::vector<std::string>& duo) {
    if (p[0] == p[1] || p[0] == p[2] || p[2] == p[1]) {
        if (p[0] == p[1] && p[1] == p[2]) {
            std::string temp(3, p[0]);

            if (!check(temp, solo))
                solo.push_back(temp);
        }
        else {
            std::string temp = getTeam(p);

            if (!check(temp, duo))
                duo.push_back(temp);
        }
    }
}

void vertical(std::string p1, std::string p2, std::string p3, std::vector<std::string>& solo, std::vector<std::string>& duo) {
    for (int i{}; i < 3; ++i) {
        if (p1[i] == p2[i] || p1[i] == p3[i] || p3[i] == p2[i]) {
            if (p1[i] == p2[i] && p2[i] == p3[i]) {
                std::string temp(3, p1[i]);

                if (!check(temp, solo))
                    solo.push_back(temp);
            }
            else {
                std::string temp = std::string() + p1[i] + p2[i] + p3[i];
                temp = getTeam(temp);

                if (!check(temp, duo))
                    duo.push_back(temp);
            }
        }
    }
}

void diagonal(std::string p1, std::string p2, std::string p3, std::vector<std::string>& solo, std::vector<std::string>& duo) {
    if (p1[0] == p2[1] || p1[0] == p3[2] || p2[1] == p3[2]) {
        if (p1[0] == p2[1] && p2[1] == p3[2]) {
            std::string temp(3, p1[0]);

            if (!check(temp, solo))
                solo.push_back(temp);
        }
        else {
            std::string temp = std::string() + p1[0] + p2[1] + p3[2];
            temp = getTeam(temp);

            if (!check(temp, duo))
                duo.push_back(temp);
        }
    }

    if (p1[2] == p2[1] || p1[2] == p3[0] || p2[1] == p3[0]) {
        if (p1[2] == p2[1] && p2[1] == p3[0]) {
            std::string temp(3, p1[2]);

            if (!check(temp, solo))
                solo.push_back(temp);
        }
        else {
            std::string temp = std::string() + p1[2] + p2[1] + p3[0];
            temp = getTeam(temp);

            if (!check(temp, duo))
                duo.push_back(temp);
        }
    }
}

int main() {
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    std::vector<std::string> solo;
    std::vector<std::string> duo;

    std::string p1{};
    std::string p2{};
    std::string p3{};

    std::cin >> p1 >> p2 >> p3;

    horizontal(p1, solo, duo);
    horizontal(p2, solo, duo);
    horizontal(p3, solo, duo);

    vertical(p1, p2, p3, solo, duo);

    diagonal(p1, p2, p3, solo, duo);

    std::cout << solo.size() << "\n";
    std::cout << duo.size();

    return 0;
}
