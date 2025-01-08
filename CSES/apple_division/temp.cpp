#include<bits/stdc++.h>

typedef long long ll;

ll min_diff(std::vector<ll> const &weights, unsigned long index, ll sum1, ll sum2){
    if(index == weights.size()){
        return std::abs(sum1-sum2);
    }
    else{
        return std::min(min_diff(weights, index+1, sum1+weights[index], sum2), min_diff(weights, index+1, sum1, sum2+weights[index]));
    }
}

void solve(){

    int apples;

    std::cin >> apples;

    std::vector<ll> weights (apples);

    for(auto &x: weights){
        std::cin >> x;
    }

    std::cout << min_diff(weights,0,0,0) << '\n';
}


int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
