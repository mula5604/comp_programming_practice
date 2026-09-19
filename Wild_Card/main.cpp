#include <iostream>
#include <string>


int main()
{
    std::string S{};
    std::string T{};
    int N{};

    std::cin>> N;
    std::cin>>S;
    std::cin>>T;

    for (int i{};i < N; i++){
        if (T[i] == '*')
            T[i] = S[i];
    }

    if (T == S){
        std::cout<<"Yes";
    }

    else{
        std::cout<<"No";
    }

    return 0;
}
