#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned n;
std::cin >> n;
std::vector<unsigned> d(n);

for(auto &x : d)
    std::cin >> x;

std::sort(d.begin(), d.end());

std::cout << d[n/2] - d[n/2 -1] << std::endl;

return 0;
}
