#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned a, b, k;

    std::cin >> a >> b >> k;

    for(unsigned i = a; i <= b; i++){
        if(i-a < k || b-i < k)
            std::cout << i << '\n';
    }

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();
}
