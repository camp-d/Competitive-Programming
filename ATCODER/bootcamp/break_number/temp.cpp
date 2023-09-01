#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned n, ans = 1;

std::cin >> n;

for(unsigned i = 2; i < n; i *= 2){
    ans = i;
    if(ans*2 == n)
        ans = ans*2;
}

std::cout << ans << std::endl;

return 0;
}
