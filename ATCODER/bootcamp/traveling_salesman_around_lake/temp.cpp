#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned k, n;
std::cin >> k >> n;

std::vector<unsigned> houses (n+1);

for(auto &x : houses)
    std::cin >> x;

unsigned max_seg = 0;

houses[n] = k + houses[0];

for(unsigned i = 1; i < n+1; i++){
    max_seg = std::max(max_seg,houses[i] - houses[i-1]);
}

std::cout << k-max_seg << std::endl;

return 0;
}
