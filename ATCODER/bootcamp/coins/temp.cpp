#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    ll a, b, c, x;
    std::cin >> a >> b >> c >> x;

    int total;
    int ways = 0;

    for(int i = 0; i <= a; i++){
        for(int j {0}; j <= b; j++){
            for(int k {0}; k <= c; k++){
                total = i*500 + j*100 + k*50;
                if(total == x)
                    ways+=1;
            }
        }
    }

    std::cout << ways << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
