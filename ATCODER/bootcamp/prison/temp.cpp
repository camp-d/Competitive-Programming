#include<bits/stdc++.h>

typedef long long ll;

void solve(){


    int num_cards, num_gates;

    std::cin >> num_cards >> num_gates;

    std::vector<std::pair<int, int>> cards(num_gates);
    std::pair<int, int> required_range (0,num_cards);

    for(auto x : cards){
        std::cin >> x.first >> x.second;
        if(x.first > required_range.first)
            required_range.first = x.first;
        if(x.second < required_range.second)
            required_range.second = x.second;
    }

    if( required_range.first > required_range.second)
        std::cout << 0 << '\n';
    else
        std::cout << required_range.second - required_range.first + 1 << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
