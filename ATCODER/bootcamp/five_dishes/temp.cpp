#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int x;
    int time = 0;
    int diff_10;
    int max = -1;
    
    while(std::cin >> x){
        diff_10 = 10 - x % 10;
        if(diff_10 == 10)
            diff_10 = 0;
        max = std::max(max, diff_10);
        time = time + diff_10 + x;
    }

    std::cout << time - max << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
