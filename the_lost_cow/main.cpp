#include <iostream>
#include <cstdlib>

int main() {

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x{};
    int y{};

    std::cin>>x>>y;

    int distance = std::abs(y - x);
    int k{};
    int power = 1;

    while (power<distance || k%2 == (y-x<0 ? 0:1)) {
        k++;
        power *= 2;
    }

    int total = distance + 2 * power - 2;

    std::cout<<total;

    return 0;
}
