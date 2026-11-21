#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>

int main(){

    int n{};
    std::cin>>n;

    std::vector<std::string> cities(n);
    std::vector<int> city_scores(n);
    std::set<std::string> c;

    for (int i{};i<n;++i){
        std::cin>>cities[i]>>city_scores[i];
        c.insert(cities[i]);
    }

    std::vector<std::string> cv(c.begin(), c.end());

    std::map<int,int> order;
    std::vector<int> ordered_scores;
    for (int i{}; i<c.size(); ++i){
        std::vector<int> temp_scores{};
        for (int j{};j<n;++j){
            if (cities[j] == cv[i]){
                order[city_scores[j]] = j + 1;
                temp_scores.push_back(city_scores[j]);
            }
        }
        std::sort(temp_scores.begin(),temp_scores.end());
        std::reverse(temp_scores.begin(), temp_scores.end());
        ordered_scores.insert(ordered_scores.end(),temp_scores.begin(),temp_scores.end());
    }
    for (int i{};i<n;++i){
        std::cout<<order[ordered_scores[i]]<<"\n";
    }

    return 0;
}
