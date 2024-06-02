#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int cities, roads;

    std::cin >> cities >> roads;

    std::vector<int> road_num(cities, 0);

    while(roads--){
        int c1, c2;
        std::cin >> c1 >> c2;
        road_num[c1-1]++;
        road_num[c2-1]++;
    }

    for(auto x : road_num){
        std::cout << x << '\n';
    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();
}
