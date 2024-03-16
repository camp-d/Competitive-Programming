#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int trials;
    int guess = 0;
    int swap1, swap2;

    std::cin >> trials;
    std::vector<std::pair<int,int>> shells = {{1,0}, {2,0}, {3,0}};

    while(trials--){
        std::cin >> swap1 >> swap2 >> guess;
        std::swap(shells[swap1-1], shells[swap2-1]);
        shells[guess-1].second++;
    }
    std::cout << std::max({shells[0].second, shells[1].second, shells[2].second}) << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("shell.in","r",stdin);
std::freopen("shell.out","w",stdout);

solve();

return 0;
}
