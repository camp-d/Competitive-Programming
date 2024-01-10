#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    ll collatz;

    std::cin >> collatz;

    while(collatz != 1){
        std::cout << collatz << ' ';
        if( !(collatz & 1) )
           collatz >>= 1;
        else
            collatz = collatz*3 +1;
    }
    std::cout << collatz << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
