#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned cows, session_count;

    std::cin >> session_count >> cows;

    std::vector<std::vector<unsigned>> sessions (session_count, std::vector<unsigned>(cows, 0));

    for(auto &x : sessions){
        for( auto &y : x){
            std::cin >> y;
            //std::cout << y << " ";
        }
    }

    unsigned pairs = 0;
    int found_n = 0;

    for(unsigned i = 0; i < cows; i++){
        for(unsigned j = 0; j < cows; j++){
            found_n = 0;
            if( j != i){
                for(auto x: sessions){
                    for(auto y: x){
                        if( i+1 == y){
                            break;
                        }
                        else if( j+1 == y){
                            found_n = 1;
                            break;
                        }
                    }
                    if(found_n == 1){
                        break;
                    }
                }
                if(found_n == 0){
                    pairs++;
                }
            }
        }
    }
    std::cout << pairs << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("gymnastics.in","r",stdin);
std::freopen("gymnastics.out","w",stdout);

solve();

return 0;
}
