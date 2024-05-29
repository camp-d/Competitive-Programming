#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n;
    std::cin >> n;

    int sum = 0;


    std::vector<int> maxes(n-1,0);

    for(auto &x : maxes)
        std::cin >> x;

    if(n == 2)
        std::cout << maxes[0]*2 << '\n';
    else{
        for(int i = 0; i < n; i++){
            if(i == 0){
                sum += maxes[i];
                //std::cout << "F/B: ";
                //std::cout << "adding " << maxes[i] << std::endl;
            }
            else if(i == n-1){
                sum += maxes[n-2];
                //std::cout << "F/B: ";
                //std::cout << "adding " << maxes[i] << std::endl;
                //std::cout << std::endl << i << std::endl;
            }
            else{
                if(maxes[i-1] < maxes[i]){
                    sum += maxes[i-1];
                    //std::cout << "adding " << maxes[i-1] << std::endl;
                }
                else if(maxes[i-1] >= maxes[i]){
                    sum += maxes[i];
                    //std::cout << "adding " << maxes[i-1] << std::endl;
                }
            }
        }
        std::cout << sum << '\n';
    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
