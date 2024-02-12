#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned n, a, b;

    unsigned digit_sum;
    unsigned digit;
    unsigned total_sum = 0;

    std::cin >> n >> a >> b;

    for(unsigned i = 0; i < n+1; i++){
        digit_sum = 0;
        digit = i;
        while(digit != 0){
            digit_sum += digit%10;
            digit /= 10;
        }
        if( digit_sum >= a && digit_sum <= b)
            total_sum += i;
    }

    std::cout << total_sum << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
