#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    std::string word;

    std::cin >> word;

    std::unordered_map<char, int> chars;

    int i = 0;

    for(auto x : word){
        if(i > 0 && chars.contains(x)){
                std::cout << "no" << '\n';
                return;
        }
        chars.insert(std::make_pair(x,i));
        i++;
    }
    std::cout << "yes" << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
