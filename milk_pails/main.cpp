#include <iostream>
#include <algorithm>


int main(){

    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int m{};
    int x{};
    int y{};

    std::cin>>x>>y>>m;

    int my_max{};
    int i{};
    int current_x{};
    int current_y{};
    int j{1};

    while (current_x < m) {
        current_x = x * i;
        ++i;
        while (y * j <= m - current_x){
            current_y = y * j;
            ++j;
            }
        j = 1;
        if (current_x + current_y <= m) {
            my_max = std::max(my_max, current_x + current_y);
                }
        current_y = 0;
        }

    std::cout<<my_max;


    return 0;
}
