#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    int n{};
    std::cin>>n;

    std::vector<int> a(n);
    for (int i{};i<n;++i){
        std::cin>>a[i];
    }

    int my_min{400};

    for (int i{};i<n;++i){
        int sum = a[i];
        my_min = std::min(my_min, std::abs(360 - 2 * sum));
        for (int j{i+1};j<n;++j){
            if (i == j){
                continue;
            }
            sum += a[j];
            my_min = std::min(my_min, std::abs(360 - 2 * sum));
        }
    }
    if (n == 1){
        std::cout<<a[0];
    }
    else {
        std::cout<<my_min;
    }

    return 0;
}
