#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int cows, gene_count;

    const std::map<char,int> id{{'A',0}, {'T',1}, {'C',2}, {'G',3}};
    std::unordered_set<int> seen;

    std::cin >> cows >> gene_count;

    std::vector<std::string> spotty_genes (cows);
    std::vector<std::string> plain_genes (cows);

    for(auto &x : spotty_genes)
        std::cin >> x; 

    for(auto &x : plain_genes)
        std::cin >> x;


    int ans = 0;
    for(auto x : spotty_genes){
        for(int i = 0; i < gene_count; i++){
            for(int j = i+1; j < gene_count; j++){
                for(int k = j+1; k < gene_count; k++){
                    int code = 16*id.at(x.at(i)) + 4 * id.at(x.at(j)) + id.at(x.at(k));
                    if(seen.contains(code)){
                        continue;
                    }
                    else{
                        seen.insert(code);
                    }
                }
            }
        }


    }

    for(int i = 0; i < gene_count; i++){
        for(int j = i+1; j < gene_count; j++){
            for(int k = j+1; k < gene_count; k++){
                int code1 = 16*id.at(spotty_genes.at(0).at(i)) + 4 * id.at(spotty_genes.at(0).at(j)) + id.at(plain_genes.at(0).at(k));
                int code2 = 16*id.at(spotty_genes.at(1).at(i)) + 4 * id.at(spotty_genes.at(1).at(j)) + id.at(plain_genes.at(1).at(k));
                int code3 = 16*id.at(spotty_genes.at(2).at(i)) + 4 * id.at(spotty_genes.at(2).at(j)) + id.at(plain_genes.at(2).at(k));
                seen.insert(code1);
                seen.insert(code2);
                seen.insert(code3);
            }
        }
    }

    for(int i = 0; i < gene_count; i++){
        for(int j = i+1; j < gene_count; j++){
            for(int k = j+1; k < gene_count; k++){
                int code1 = 16*id.at(plain_genes.at(0).at(i)) + 4 * id.at(plain_genes.at(0).at(j)) + id.at(plain_genes.at(0).at(k));
                int code2 = 16*id.at(plain_genes.at(1).at(i)) + 4 * id.at(plain_genes.at(1).at(j)) + id.at(plain_genes.at(1).at(k));
                int code3 = 16*id.at(plain_genes.at(2).at(i)) + 4 * id.at(plain_genes.at(2).at(j)) + id.at(plain_genes.at(2).at(k));
                if(seen.contains(code1) || seen.contains(code2) || seen.contains(code3)){
                    continue;
                }
                else
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
