#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);


    int n{};
    int k{};

    std::cin>>n>>k;
    std::vector<int> d(n);

    for (int i{};i<n;++i){
        std::cin>>d[i];
    }

    int my_max{};
    for (int i{};i<n;++i){
        int my_count{};
        for (int j{};j<n;++j){
            if (d[j] >= d[i] && d[j] <= d[i] + k) {
                my_count++;
            }
        }
        my_max = std::max(my_max,my_count);

    }
    std::cout<<my_max;


    return 0;
}
