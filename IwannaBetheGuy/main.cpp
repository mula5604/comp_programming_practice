#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

int main()
{
    int n{};
    int p{};
    int q{};

    std::cin>>n;

    std::cin>>p;
    std::vector<int>a(p);

    for (int i{};i < p;i++){
        std::cin>>a[i];
    }
    std::cin>>q;
    std::vector<int>b(q);

    for (int i{};i < q;i++){
        std::cin>>b[i];
    }

    a.insert(a.end(),b.begin(),b.end());
    std::set<int> temp{a.begin(),a.end()};

    if (temp.size() == n){
        std::cout<<"I become the guy.";
    }
    else {
        std::cout<<"Oh, my keyboard!";
    }



    return 0;
}
