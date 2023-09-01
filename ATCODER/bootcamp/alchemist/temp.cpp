#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned ingredients;

std::cin >> ingredients;

std::vector<int> ings(ingredients);

for(auto &x : ings)
    std::cin >> x;

sort(ings.begin(), ings.end());

double ans = ings[0];

for(int i = 1; i < ingredients; i++){
    ans = (ans + ings[i])/2.0;
}

std::cout << ans << std::endl;

return 0;
}
