#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int num_diamonds, d_size;
    int ans = 0;
    int sum = 0;
    std::vector<int> diamonds (10, 0);

    std::cin >> num_diamonds >> d_size;

    for(int i = 0; i < num_diamonds; i++){
        int index;
        std::cin >> index;
        diamonds[index]++;
    }
    for(int i = 0; i < num_diamonds; i++){
        sum = 0;
        for(int j = 0; j <= d_size; j++){
            sum += diamonds[j+i];
        }
        ans = std::max(ans,sum); 
    }

    std::cout << ans << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("diamond.in","r",stdin);
std::freopen("diamond.out","w",stdout);

solve();

return 0;
}
