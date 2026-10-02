#include <iostream>
#include <vector>
#include <string>


int main(){

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

   int k{};
   int m{};
   int n{};
   std::vector<std::string> s;

   std::cin>>m>>n>>k;

    for (int i{}; i < m; i++) {
        std::string temp;
        std::cin >> temp;
        s.push_back(temp);
    }


    for (int i {};i < s.size() ; i++){
        std::string curr = s[i];
        std::string temp{};
        for (int j{}; j < curr.size(); j++){
            if (curr[j] == '.'){
                temp += std::string(k, '.');
            }
            else {
                temp += std::string(k, 'X');
            }
        }
        for (int i{};i < k;i++){
            std::cout<<temp<<"\n";
        }
    }

    return 0;
}
