#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


unsigned seed = 0;

std::cin >> seed;

std::vector<unsigned> collatz;

collatz.push_back(seed);

bool repeat = false;

unsigned index = 1;

while(!repeat){
    index++;
    if(seed%2 == 0){
        seed = seed/2;
    }
    else{
        seed = 3*seed + 1;
    }

    for(auto x: collatz){
        if (x == seed)
            repeat = true;
    }
    collatz.push_back(seed);
}

std::cout << index << std::endl;

return 0;
}
