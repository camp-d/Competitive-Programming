#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

ll n, k;

std::cin >> n >> k;

std::cout << std::min(n%k, std::abs(k-(n%k))) << std::endl;

return 0;
}
