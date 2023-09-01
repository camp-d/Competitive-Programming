#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{

std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned n = 0;
unsigned candy = 0;
unsigned happy_kids = 0;
unsigned total = 0;

std::cin >> n >> candy;

std::vector<unsigned> kids(n);

for(auto &x: kids){
    std::cin >> x;
}

std::sort(kids.begin(), kids.end(), std::less<unsigned>());

for(unsigned i = 0; i < n; i++){
    total += kids[i];
}

for(unsigned i = 0; i < n; i++){
    if(candy >= kids[i] && i != n-1){
        candy -= kids[i];
        happy_kids++;
    }
    else if( i == n-1 && candy == kids[i]){
        happy_kids++;
    }
}

std::cout << happy_kids << std::endl;

return 0;
}
