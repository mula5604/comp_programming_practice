#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>




int make_symetric(std::vector<std::string>& grid,int j,int i) {
    int answer = 0;

    int count = 0;

    if (grid[i][j] == '#') ++count;
    if (grid[i][n - 1 - j] == '#') ++count;
    if (grid[n - 1 - i][j] == '#') ++count;
    if (grid[n - 1 - i][n - 1 - j] == '#') ++count;

    answer += std::min(count, 4 - count);

    return answer;

}



int main(){
    std::vector<std::string> grid;
    std::vector<std::pair<int,int>> changes;
    int n{};
    int u{};

    std::cin>>n>>u;


    for (int i{};i<n;++i){
        std::string temp;
        std::cin>>temp;
        grid.push_back(temp);
    }
    for (int i{};i<u;++i){
        std::pair<int,int> temp;
        std::cin>>temp.first>>temp.second;
        changes.push_back(temp);
    }


    std::cout<<make_symetric(grid,std::pair(0,0),n)<<"\n";

    for (int i{};i<u;++i){
        std::cout<<make_symetric(grid,changes[i],n)<<"\n";
    }
    for (int i{}; i < n / 2; ++i) {
        for (int j{}; j < n / 2; ++j) {


    return 0;
}
