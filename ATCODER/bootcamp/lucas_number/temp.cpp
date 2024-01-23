#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    ll num;

    std::cin >> num;

    std::vector<ll> lucas (num, 0);

    lucas[0] = 2;
    lucas[1] = 1;
    
    for(ll i = 2; i <= num; i++){
        lucas[i] = lucas[i-1] + lucas[i-2];
    }

    std::cout << lucas[num] << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
