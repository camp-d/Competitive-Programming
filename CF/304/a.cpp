#include<bits/stdc++.h>

typedef long long ll;


void solve(){

    long long bananas, cost, money;
    long long total = 0;

    std::cin >> cost >> money >> bananas;

    for(long long i = 1; i <= bananas; i ++){
        total += cost*i;
    }

    total -= money;
    if(total < 0)
        total = 0;
    std::cout << total << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 

solve();

return 0;
}
