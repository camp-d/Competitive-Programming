#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int H, W;

    std::cin >> H >> W;

    std::vector<std::vector<char>> pic (H, std::vector<char> (W));
    std::vector<char> frame (W+2, '#');


    for(auto& x : pic){
        for(auto& y : x)
            std::cin >> y;
    }

    for(auto x : frame)
        std::cout << x;
    std::cout << '\n';
    for(auto& x : pic){
        std::cout << '#';
        for(auto& y : x)
            std::cout << y;
        std::cout << '#' << '\n';
    }
    for(auto x : frame)
        std::cout << x;
    std::cout << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
