#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int a = 1024;
    int b;


    for(b = 0; a > 1;b++)
    {
        a /= 2;
    }
    std::cout << b << std::endl;

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
