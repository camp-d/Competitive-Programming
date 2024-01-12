#include<bits/stdc++.h>

typedef long long ll;

void solve(){


    int VIT, ATT, END, STR, DEX, RES, INT, FAI, level;
    std::string Class;

    std::cin >> Class >> level >> VIT >> ATT >> END >> STR >> DEX >> RES >> INT >> FAI;

    std::cout << Class << " Stat total minus levels: " << VIT+ATT+END+STR+DEX+RES+INT+FAI-level << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
