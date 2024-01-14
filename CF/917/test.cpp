#include<bits/stdc++.h>

void solve(){
    int size;
    std::cin >> size;
    std::vector<int> nums(size);

    for(auto &x : nums){
        std::cin >> x;
        if( x == 0){
            std::cout << 0 << '\n';
            return;
        }
    }

    /*
    for(auto &x : nums){
        if( x == 0){
            std::cout << 0 << '\n';
            return;
        }
    }
    */
}

int main(){

int n;
std::cin >> n;

while(n--)
    solve();

return 0;
}
