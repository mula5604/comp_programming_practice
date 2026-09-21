#include <iostream>
#include <algorithm>

int main()
{
    int t{};
    int n{};
    int a[] = {0,0,0};

    std::cin>>t;

    for (int i{};i < t;i++){
        std::cin>>n;
        std::cin>>a[0]>>a[1]>>a[2];

        std::cout << n - std::min({a[0], a[1], a[2]}) << '\n';

    }


    return 0;
}
