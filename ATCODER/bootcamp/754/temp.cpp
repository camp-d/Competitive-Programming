#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    std::string num;
    std::string slice;
    int num2, target = 753;
    int diff, min_diff = -1;

    std::cin >> num;

    for(unsigned i {0}; i < num.length()-2;i++){
        slice = num.substr(i, 3);
        num2 = std::stoi(slice);

        if(target > num2)
            diff = target - num2;
        else
            diff = num2 - target;

        if(min_diff == -1){
            min_diff = diff;
        }
        else if(diff < min_diff){
                min_diff = diff;
        }
    } 

    std::cout << min_diff << '\n';
} 

int main(){
            
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
