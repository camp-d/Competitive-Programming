#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int a, b, i = 0;
    std::string code;

    std::cin >> a >> b >> code;

     for(auto x : code){
         if( i != a && x == '-'){
             std::cout << "No" << '\n';
             return;
         }
         else if( i == a && x != '-'){
             std::cout << "No" << '\n';
             return;
         }
         i++;
     }
     std::cout << "Yes" << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
