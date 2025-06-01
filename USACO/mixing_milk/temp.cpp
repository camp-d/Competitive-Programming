#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

typedef long long ll;

const int N = 3;
const int TURN_NUM = 100;

void solve(){

    std::vector<int> capacity(N);
    std::vector<int> milk(N);

    int bucket_pour, bucket_fill, amount;

    for(int i = 0; i < N; i++) {scanf("%d %d", &capacity[i], &milk[i]);}

    for(int i = 0; i < TURN_NUM; i++){
        bucket_pour = i % N;
        bucket_fill = (i+1) % N;


        amount = std::min(milk[bucket_pour], capacity[bucket_fill] - milk[bucket_fill]);

        milk[bucket_pour] -= amount;
        milk[bucket_fill] += amount;

    }

    for(auto m : milk){
        std::cout << m << '\n';
    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("mixmilk.in","r",stdin);
std::freopen("mixmilk.out","w",stdout);

solve();

return 0;
}
