#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    int t;
    int m;
    int n;
    int c;

    std::cin>>t;
    std::cin>>n>>m;

    std::vector<int> a(n);

    for (int i{};i < n;i++){
        std::cin>>a[i];
    }

    std::sort(a.begin(),a.end());
    int x = a[0];

    for (int i{1};i < n;i++){
        if (x <= a[i]){
            c++;
        }
    }
    std::cout<<c;
    return 0;
}
