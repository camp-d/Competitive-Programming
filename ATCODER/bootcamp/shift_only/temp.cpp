#include<bits/stdc++.h>

typedef long long ll;

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned n;
unsigned min = 0;
unsigned x;

std::cin >> n;

while(std::cin >> x){
    min |= x;
}
std::cout << __builtin_ctz(min) << "\n";

return 0;
}
