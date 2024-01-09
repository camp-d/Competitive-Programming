#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    std::string word;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::cin >> word;

    std::unordered_map<char, int> chars;

    int count = 0;

    for(auto c : word){
        if(count == 0 || !chars.contains(c) ){
            chars.insert(std::make_pair(c, count));
        }
        count+=1;
    }
    
    for(auto c : alphabet){
        if(!chars.contains(c)){
            std::cout << c << '\n';
            return;
        }
    }
    std::cout << "None" << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
