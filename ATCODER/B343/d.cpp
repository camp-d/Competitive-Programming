#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned players;

    std::cin >> players;

    std::vector<unsigned> scores (players, 0);
    std::unordered_map<unsigned> diffs;

    diffs.insert(std::make_pair(0,4));

    unsigned time;
    std::cin >> time;

    unsigned index = 0;
    unsigned increase = 0;

    for(unsigned i = 0; i < time; i++){
        std::cin >> index >> increase;
        unsigned temp = scores.at(index-1);
        scores.at(index-1)+= increase;
        diffs.insert(scores.at(index-1));
        unsigned occurs = 0;
        diffs.erase(temp);
        std::cout << diffs.size() << '\n';
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
