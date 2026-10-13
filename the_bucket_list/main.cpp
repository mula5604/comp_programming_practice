#include <iostream>
#include <vector>
#include <algorithm>

int main(){


    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);


    int n{};
    std::vector<std::vector<int>> arr;

    std::cin>>n;
    int b_max{};
    for (int i{};i < n;i++){
        int s{};
        int t{};
        int b{};

        std::cin>>s>>t>>b;
        std::vector<int> temp;
        temp.push_back(s);
        temp.push_back(t);
        temp.push_back(b);
        arr.push_back(temp);
    }

    int max_bucket{};
    for (int k{1};k <= 1000;++k){
        int buckets{};
        for (int i{}; i < n;++i){
            if (k >= arr[i][0] && k <= arr[i][1]){
                buckets += arr[i][2];
            }
        }
        max_bucket = std::max(max_bucket,buckets);
    }

    std::cout<<max_bucket;
    return 0;
}
