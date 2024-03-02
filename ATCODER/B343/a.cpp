#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int a, b;

    std::cin >> a >> b;

    int c = a + b;

    if(c > 9){
        std::cout << c % 3;
    }
    else if(c > 1){
        std::cout << c - 1;
    }
    else{
        std::cout << c + 1;
    }
    std::cout << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
