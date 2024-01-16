#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    std::string word;
    std::unordered_map<char,int> map;

    std::cin >> word;

    for(auto x : word){

        if(map.contains(x))
            map.at(x)++;
        else
            map.insert(std::make_pair(x, 1));
    }

    for(auto x : map){
        if(x.second % 2){
            std::cout << "No" << '\n';
            return;
        }
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
