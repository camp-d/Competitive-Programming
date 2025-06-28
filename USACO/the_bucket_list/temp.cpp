#include <iostream>
#include <vector>
#include <array>
#include <algorithm>


typedef long long ll;

void solve(){

    int num_cows;

    std::cin >> num_cows;

    std::vector<std::vector<int>> cows(num_cows, std::vector<int>(3));

    for(auto &x: cows)
    {
        std::cin >> x[0] >> x[1] >> x[2];
    }

    int buckets = 0;
    int max_buckets = 0;

    for(int i = 0; i <= 1000; i++){
        for(auto x : cows){
            if(i == x[0])
                buckets += x[2];
            if(i == x[1])
                buckets -= x[2];
        }
        max_buckets = std::max(max_buckets, buckets);
    }
    std::cout << max_buckets << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("blist.in","r",stdin);
std::freopen("blist.out","w",stdout);

solve();

return 0;
}
