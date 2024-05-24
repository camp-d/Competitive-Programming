#include<bits/stdc++.h>
typedef long long ll;

void solve(){

    std::string s;

    std::cin >> s;

    int index1, index2;
    int overall_count = 0;

    std::vector<int> seen (26, 0);
    std::vector<int> seen2 (26, 0);

    for(auto it = s.begin(); it != s.end(); it++){
        index1 = it - s.begin();
        if(seen2[(int)(s.at(index1)-65)] == 0){

            seen2[(int)(s.at(index1)-65)]++;

            for(auto it2 = it+1; it2 != s.end(); it2++){
                index2 = it2 - s.begin();
                if(s.at(index1) == s.at(index2) ){
                    break;
                }
                seen[(int)(s.at(index2)-65)]++;
            }

            for(unsigned i = 0; i < seen.size(); i++){
                if(seen.at(i) == 1){
                    overall_count++;
                    //std::cout << "Found path " << i << " Crossing some path " << std::endl;
                }
                seen.at(i) = 0;
            }
        }
    }
    std::cout << overall_count/2 << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("circlecross.in","r",stdin);
std::freopen("circlecross.out","w",stdout);

solve();

return 0;
}
