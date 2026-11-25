#include <iostream>
#include <vector>

int main(){

    long long n{};
    std::cin>>n;

    std::vector<long long> l(n);
    std::vector<long long> r(n);
    std::vector<long long> lr(n);

    for (int i{};i<n;++i){
        std::cin>>l[i];
    }
    for (int i{};i<n;++i){
        std::cin>>r[i];
        lr[i] = n-(r[i] + l[i]);
    }


    int check{};
    for (int i{};i<n;++i){
        long long right{};
        long long left{};
        for (int j{};j<i+1;++j){
            if (lr[j] > lr[i]){
                left++;
            }
        }
        for (int k{i+1};k<n;k++){
            if (lr[k] > lr[i]){
                right++;
            }
        }
        if (right > r[i] || left > l[i]){
            check = 1;
            break;
        }
        if ((r[i] == 1 && right == 0) || (l[i] == 1 && left == 0)){
            check = 1;
            break;
        }
        if (right < r[i] || left < l[i]){
            check = 1;
            break;
        }
    }
    if (check == 1){
        std::cout<<"NO";
    }
    else {
        std::cout<<"YES"<<"\n";
        for (int i{};i<n;++i){
            std::cout<<lr[i]<<" ";
        }
    }








}
