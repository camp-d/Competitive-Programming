#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n;
    int avg = 0;
    int check_avg = 0;
    int ans = 0;
    int count = 1;

    std::cin >> n;

    std::vector<int> flowers (n);

    for(auto &x: flowers)
        std::cin >> x;

    for(int i = 0; i < n; i++){
        avg = 0;
        count = 0;
        for(int j = i; j < n; j++){
            avg += flowers[j];
            count++;
            check_avg = avg/count;
            for( int k = i; k <= j; k++){
                if( flowers[k] == check_avg && (avg % count == 0))
                    ans++;
            }
            avg = 0;
        }
    }
    std::cout << ans << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
