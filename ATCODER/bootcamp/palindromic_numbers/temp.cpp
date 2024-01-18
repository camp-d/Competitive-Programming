#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned a, b, count = 0;

    std::cin >> a >> b;
    std::string num, rev;

    //Brute force
    //
    for(unsigned i {a}; i <= b; i++){
        num = std::to_string(i);
        rev = num;
        std::reverse(rev.begin(), rev.end());
        if(num.compare(rev) == 0)
            count++;
    }


    std::cout << count << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
