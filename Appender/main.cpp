#include <iostream>
#include <string>



int main()
{
    std::string S{};
    std::string T{};

    std::cin>>S;

    T = S;

    if (S[S.length()-1] == 'e'){
        T += "r";
    }
    else {
        T += "er";
    }

    std::cout<<T;
    return 0;
}
