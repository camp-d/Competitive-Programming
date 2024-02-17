#include<bits/stdc++.h>

typedef long long ll;

void solve(int &x){

    int sum = 0;
    std::vector<int> friends (3);

    for(auto &i : friends)
        std::cin >> i;

    for(auto i : friends)
        sum += i;

    if(sum >= 2)
        x++;
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 

int n, ans = 0;

std::cin >> n;

while(n--)
    solve(ans);

std::cout << ans << '\n';

return 0;
}
