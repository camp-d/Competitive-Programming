#include <iostream>

typedef long long ll;

void solve(){

    int eightper, tenper;
    int res = -1;

    std::cin >> eightper >> tenper;

    for(int i = tenper << 4; i > 0; i--){
        if( (i << 3) - (i<<3)%100 == eightper*100 && (i * 10)-(i*10)%100 == tenper*100)
            res = i;
    }
    std::cout << res << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();
}
