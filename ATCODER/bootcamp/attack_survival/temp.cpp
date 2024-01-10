#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n, k, q;

    std::cin >> n >> k >> q;

    std::vector<int> players (n, k);

    std::vector<int> ans (q, 0);

    for(auto &x : ans){
        std::cin >> x;
    }

    for(auto x : ans){
        players[x-1]++;
    }

    for(auto x : players){
        if(x-q > 0)
            std::cout << "Yes" << '\n';
        else
            std::cout << "No" << '\n';

    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
