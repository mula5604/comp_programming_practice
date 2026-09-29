#include <iostream>
#include <vector>

int main(){

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n{};
    int m{};

    std::cin>>n>>m;
    std::vector<int> a(n);
    std::vector<int> as(n);
    std::vector<int> b(m);
    std::vector<int> bs(m);

    int total{};
    for (int i{};i < n; i++){
        int temp{};
        std::cin>>temp>>as[i];
        total += temp;
        a[i] = total;
    }

    total = 0;
    for (int i{};i < m; i++){
        int temp{};
        std::cin>>temp>>bs[i];
        total += temp;
        b[i] = total;
    }

    int top_speed{};
    for (int i{}; i < n; i++){
    int current_limit = as[i];

    for (int j{}; j < m; j++){
        if (i == 0 && j == 0){
            top_speed = std::max(top_speed, bs[j] - current_limit);
        }
        else if (i == 0){
            if (b[j-1] < a[i]){
                top_speed = std::max(top_speed, bs[j] - current_limit);
            }
        }
        else if (j == 0){
            if (a[i-1] < b[j]){
                top_speed = std::max(top_speed, bs[j] - current_limit);
            }
        }
        else {
            if (a[i-1] < b[j] && b[j-1] < a[i]){
                top_speed = std::max(top_speed, bs[j] - current_limit);
            }
        }
    }
}
    std::cout<<top_speed;

    return 0;
}
