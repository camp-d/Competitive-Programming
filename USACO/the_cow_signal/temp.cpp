#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

typedef long long ll;

void solve(){

    std::vector<std::string> signal;
    std::string line;

    int rows, cols, scale;

    std::cin >> rows >> cols >> scale;

    while(std::cin >> line)
        signal.push_back(line);

    for(auto x : signal){
        for(int i = 0; i < scale; i++){
            for(auto c : x){
                for(int j = 0; j < scale; j++){
                    std::cout << c;
                }
            }
        std::cout << '\n';
        }
    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("cowsignal.in","r",stdin);
std::freopen("cowsignal.out","w",stdout);

solve();

return 0;
}
