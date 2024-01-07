#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << x2 - y2 + y1 << " " << y2 + x2 - x1 << " " << x1 - y2 + y1 << " " << y1 + x2 - x1 << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
