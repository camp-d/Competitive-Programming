#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n;
    std::cin >> n;

    std::vector<int> xpoints (n);
    std::vector<int> ypoints (n);

    for(auto &x : xpoints)
        std::cin >> x;
    for(auto &y : ypoints)
        std::cin >> y;

    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans = std::max(ans, (xpoints[i]-xpoints[j])*(xpoints[i]-xpoints[j]) + (ypoints[i] - ypoints[j])*(ypoints[i]-ypoints[j]));
        }
    }
    std::cout << ans << "\n";
}

int main() { 
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
solve();
return 0;
}
