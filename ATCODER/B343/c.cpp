#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    std::string forward, reverse;
    unsigned long long limit;
    std::cin >> limit;

    unsigned long long root = 0;
    unsigned long long result = 0;
    unsigned long long ans;


    while(result <= limit){

        forward = std::to_string(result);
        reverse = forward;
        std::reverse(reverse.begin(), reverse.end()); 

        if(forward == reverse){
            ans = result;
        }

        root++;
        result = root*root*root;
    }

    std::cout << ans << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
