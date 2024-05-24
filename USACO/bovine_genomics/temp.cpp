#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned cows, gene_count;

    std::cin >> cows >> gene_count;

    std::vector<std::string> genes (2*cows);

    for(auto &x : genes){
        std::cin >> x; 
    }

    int ruled_out_gene_position = 0;
    char first_gene = '!';
    int ans = 0;

    for(unsigned i = 0; i < gene_count; i++){
        ruled_out_gene_position = 0;
        for(unsigned j = 0; j < cows; j++){
            if(i == 0){
                first_gene = genes.at(j).at(i);
            }
            else if(genes.at(j).at(i) == first_gene){
                continue;
            }
            else{
                ruled_out_gene_position = 1;
                break;
            }
        }
        for(unsigned j = cows; j < 2*cows; j++){
            if(genes.at(j).at(i) == first_gene){
                ruled_out_gene_position = 1;
                break;
            }
        }
        if(ruled_out_gene_position == 0){
            ans++;
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
