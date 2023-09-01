#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned a, b; 

std::cin >> a >> b;


unsigned long c = 0, al, bl;

al = a;
bl = b;

unsigned instances_of_ten = 0;

while(b > 0){
    b = b/10;
    instances_of_ten++;
}

for(unsigned i = 0; i < instances_of_ten; i++){
    al = al*10;
}

c = al + bl;

bool is_square = false;

for(unsigned i = 0; i < 100100; i++){
    if(c == i*i)
        is_square = true;
}

if(is_square)
    std::cout << "Yes" << std::endl;
else{
    std::cout << "No" << std::endl;
}

return 0;
}
