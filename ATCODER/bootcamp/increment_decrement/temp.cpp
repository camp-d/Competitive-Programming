#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    std::string id;
    int length;
    int max = 0;
    int count = 0;

    std::cin >> length >> id;

    for(auto x : id){
        if(x == 'I')
            count++;
        else
            count--;
        max = std::max(max, count);
    }

    std::cout << max << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
