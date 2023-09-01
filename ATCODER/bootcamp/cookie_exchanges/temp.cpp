#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned a, b, c;
unsigned a2 = 0, b2 = 0, c2 = 0;
unsigned count = 0;

std::cin >> a >> b >> c;

if( a == b && b == c){
    if(a%2 == 0)
    std::cout << -1 << std::endl;
    else
    std::cout << 0 << std::endl;
    return 0;
}

while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
    a2 = b/2 + c/2;
    b2 = a/2 + c/2;
    c2 = b/2 + a/2;
    a = a2;
    b = b2;
    c = c2;
    count++;
}

std::cout << count << std::endl;

return 0;
}
