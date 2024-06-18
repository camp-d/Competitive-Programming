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

    std::string plain, spotty;
    
    for(unsigned a = 0; a < gene_count-2; a++){
        for(unsigned b = a+1; b < gene_count-1; b++){
            for(unsigned c = b+1; c < gene_count; c++){
                for(unsigned j = 0; j < cows; j++){
                    for(unsigned k = cows; k < cows*2; k++){
                        plain = "";
                        spotty = "";
                        spotty.push_back(genes.at(k).at(a));                            
                        spotty.push_back(genes.at(k).at(b));                            
                        spotty.push_back(genes.at(k).at(c));                            
                        plain.push_back(genes.at(j).at(a));                             
                        plain.push_back(genes.at(j).at(b));                            
                        plain.push_back(genes.at(j).at(c));                          
                        if(spotty == plain){
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
        }
    }





    /*
    for(unsigned i = 0; i < n; i++){
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
    */
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
