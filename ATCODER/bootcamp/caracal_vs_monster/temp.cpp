#include<bits/stdc++.h>

typedef unsigned long long ll;

ll attacks(ll health){
    if(health == 1)
        return 1;
    else if(health > 1){
        return 1 + 2*attacks(health/2);
    }
    return 0;
}

void solve(){

    ll health;

    std::cin >> health;

    std::cout << attacks(health) << std::endl;

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
