#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::string str;

char a;

std::cin >> str;

unsigned count = 0;
unsigned max_count = 0;

for(unsigned i = 0; i < str.length(); i++){
    if(str[i] == 'A' || str[i] == 'T' || str[i] == 'C' || str[i] == 'G')
        count++;
    else
        count = 0;
    max_count = std::max(count, max_count);
}


std::cout << max_count << std::endl;

return 0;
}
