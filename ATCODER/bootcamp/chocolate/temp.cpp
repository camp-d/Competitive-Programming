#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


unsigned size = 0, days = 0, pieces = 0;

unsigned total = 0;

std::cin >> size >> days >> pieces;

std::vector<unsigned> campers(size);



for(auto &x: campers){
    std::cin >> x;
}


//n^2 time complexity, brute force
for(unsigned i = 0; i < campers.size(); i++){
    for(unsigned j = 0; j < days; j++){
        if(j*campers[i]+1 <= days){
            total++;
        }
    }
}

total += pieces;

std::cout << total << std::endl;

return 0;
}
