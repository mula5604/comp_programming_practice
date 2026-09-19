#include <iostream>
#include <vector>


int main()
{

    int N{};
    int temp{};

    std::cin>>N;
    std::vector<int> A(N);

    for (int i=0;i < N;i++){
        std::cin>>A[i];
    }

    int one{A[0]},two{A[1]},three{A[2]};

    if (two > one){
        temp = one;
        one = two;
        two = temp;

    }
    if (three > two){
        temp = three;
        three = two;
        two = temp;
    }

    if (two > one){
        temp = one;
        one = two;
        two = temp;
    }

    std::cout<<three<<"\n";

    for (int j=3;j < N;j++){
        temp = A[j];
        if (temp > one){
            three = two;
            two = one;
            one = temp;
        }
        else if (temp > two){
            three = two;
            two = temp;
        }
        else if (temp > three){
            three = temp;
        }
    std::cout<<three<<"\n";
    }


    return 0;
}

