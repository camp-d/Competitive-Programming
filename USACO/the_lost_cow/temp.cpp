#include <cstdio>
#include <iostream>
#include <algorithm>

typedef long long ll;

void solve(){

    int farmer_start, farmer_current, cow, distance, move;

    std::cin >> farmer_start >> cow;

    farmer_current = farmer_start;
    distance = 0;
    move = 1;
    while(cow < std::min(farmer_start, farmer_current) || cow > std::max(farmer_start, farmer_current)){
        distance += std::abs(farmer_current - farmer_start) + std::abs(move);
        farmer_current = farmer_start + move;
        move = move << 1;
        move = -move;
    }
    std::cout << distance - std::abs(farmer_current - cow) << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("lostcow.in","r",stdin);
std::freopen("lostcow.out","w",stdout);

solve();

return 0;
}
