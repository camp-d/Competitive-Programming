#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int A, B, M;

    int min = INT_MAX;

    std::cin >> A >> B >> M;

    int fridge, microwave, coupon;
    int min_size; 

    std::vector<int> fridges (A);
    std::vector<int> microwaves (B);
    std::vector<int> coupons (M);

    for(auto &x: fridges){
        std::cin >> x;
    }
    for(auto &y: microwaves){
        std::cin >> y;
    }

    min = *std::min_element(fridges.begin(), fridges.end()) + *std::min_element(microwaves.begin(), microwaves.end());


    for(int i {0}; i < M; i++){
        std::cin >> fridge >> microwave >> coupon;
        min = std::min(min,fridges.at(fridge-1)+microwaves.at(microwave-1)-coupon);
    }

    std::cout << min << std::endl;

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
