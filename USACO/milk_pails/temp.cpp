#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int x, y, m;
    int inter = 0;

    std::cin >> x >> y >> m;

    for(int i = 0; i*x <= m; i++){
        for(int j = 0; j*y <= m; j++){
            if(i*x + j*y <= m)
                inter = std::max(inter, i*x + j*y);
        }
    }
    std::cout << inter << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("pails.in","r",stdin);
std::freopen("pails.out","w",stdout);

solve();

return 0;
}
