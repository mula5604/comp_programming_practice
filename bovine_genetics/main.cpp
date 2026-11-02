#include <iostream>
#include <map>
#include <vector>

std::map<int,std::string> combine(std::vector<std::string> genes,int n,int m){
    std::map<int,std::string> positions;
    for (int i{};i<n;++i){
        for (int j{};j<m;++j){
            positions[j] += genes[i][j];
        }
    }
    return positions;
}

int main(){

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);


    int n{};
    int m{};

    std::cin>>n>>m;

    std::vector<std::string> spot(n);
    std::vector<std::string> spotless(n);

    for (int i{};i<n;++i){
        std::cin>>spot[i];
    }
    for (int i{};i<n;++i){
        std::cin>>spotless[i];
    }
    std::map<int,std::string> spot_pos = combine(spot,n,m);
    std::map<int,std::string> spotless_pos = combine(spotless,n,m);

    int c{};
    for(int i{};i<m;++i){
            int temp{};
        for (int j{};j<n;++j){
            if (spotless_pos[i].find(spot_pos[i][j]) != std::string::npos){
                continue;
            }
            else {
                temp++;
                if (temp >= n){
                    c++;
                }
            }
        }
    }
    std::cout<<c;




    return 0;
}
