#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned tiles, tolls, start;

std::cin >> tiles >> tolls >> start;

std::vector<unsigned> toll_road(tolls);

unsigned lcost = 0;
unsigned rcost = 0;

for(auto &x: toll_road){
    std::cin >> x;
    if(x > start)
        rcost++;
    else
        lcost++;
}


std::cout << std::min(rcost, lcost) << std::endl;


return 0;
}
