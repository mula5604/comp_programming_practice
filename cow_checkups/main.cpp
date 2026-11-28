#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n{};
    std::cin>>n;

    std::vector<int> a(n);
    std::vector<int> b(n);
    std::vector<int> tally(n+1);
    std::vector<int> pre(n+1);
    pre[0] = 0;

    for (int i{};i<n;++i){
        std::cin>>a[i];
    }
    for (int i{};i<n;++i){
        std::cin>>b[i];
        if (a[i] == b[i]){
            pre[i+1] = pre[i] + 1;
        }
        else {
            pre[i+1] = pre[i];
        }
    }

    for (int c{};c<n;++c){
        long long l{c};
        long long r{c};
        long long inside{};

        if (a[c] == b[c]){
            inside++;
        }

        while (true) {
        int checked = pre[n] - (pre[r + 1] - pre[l]) + inside;
        tally[checked] += 1;

        --l;
        ++r;
        if (l < 0 || r >= n) {
            break;
            }
        if (a[r] == b[l]) {
            ++inside;
            }
        if (a[l] == b[r]) {
            ++inside;
            }
        }

        l = c;
        r = c+1;
        inside = 0;

        if (r >= n){
            continue;
        }

        if (a[r] == b[l]) {
            ++inside;
        }
        if (a[l] == b[r]) {
            ++inside;
        }

        while (true) {
            int checked = pre[n] - (pre[r + 1] - pre[l]) + inside;
            tally[checked] += 1;

            --l;
            ++r;
            if (l < 0 || r >= n) {
                break;
                }
            if (a[r] == b[l]) {
                ++inside;
                }
            if (a[l] == b[r]) {
                ++inside;
                }
            }
        }



    for (int i{};i<n+1;++i){
        std::cout<<tally[i]<<"\n";
    }

    return 0;
}
