#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned cows, gene_count;

    std::cin >> cows >> gene_count;

    std::vector<std::string> genes (2*cows);

    for(auto &x : genes){
        std::cin >> x; 
    }

    int ans = 0;
    int bflag = 0;

    for(unsigned i = 0; i < gene_count; i++){
        for(unsigned j = 0; j < cows; j++){
            for(unsigned k = cows; k < cows*2; k++){
                if(genes.at(k).at(i) == genes.at(j).at(i)){
                    bflag = 1;
                    break;
                }
            }
            if(bflag == 1){
                bflag = 0;
                break;
            }
            else if(j+1 == genes.size()/2){
                ans++;
            }
        }
    }
    std::cout << ans << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("cownomics.in","r",stdin);
std::freopen("cownomics.out","w",stdout);

solve();

return 0;
}
