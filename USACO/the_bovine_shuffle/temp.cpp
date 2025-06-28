#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

typedef long long ll;

void solve(){

    int num_cows;

    std::cin >> num_cows;

    std::vector<int> shuff(num_cows);

    for(auto &x: shuff)
        std::cin >> x;

    std::vector<std::pair<int, std::string>> cows;

    for(int i = 0; i < num_cows; i++){
        std::string cow;
        std::cin >> cow;
        cows.push_back(std::make_pair(i,cow));
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < (int)shuff.size(); j++){
            cows[shuff[j]-1].first = j;
        }
        std::sort(cows.begin(), cows.end());
    }

    std::sort(cows.begin(), cows.end());

    for(auto x : cows){
        std::cout << x.second << '\n';
    }


}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("shuffle.in","r",stdin);
std::freopen("shuffle.out","w",stdout);

solve();

return 0;
}
