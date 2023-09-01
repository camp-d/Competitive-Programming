#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned start;
unsigned start_looper;
bool primeFound = false;

std::cin >> start;

while(!primeFound){
    start_looper = static_cast<unsigned>(std::ceil(std::sqrt(start)));
    primeFound = true;
    for(unsigned i = 2; i <= start_looper; i++){
        if(start%i == 0 && start != i){
            primeFound = false;
            break;
        }
    }
    if(!primeFound)
    start++;
}

std::cout << start << std::endl;

return 0;
}
