#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int a, b;

    int x, y;

    std::cin >> a >> b >> x >> y;
    
    int ans = std::min(std::abs(a-x) + std::abs(b-y), std::abs(b-a));
    ans = std::min(std::abs(a-y)+std::abs(b-x), ans);

    std::cout << ans << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

freopen("teleport.in","r",stdin);
freopen("teleport.out","w",stdout);

solve();

return 0;
}
