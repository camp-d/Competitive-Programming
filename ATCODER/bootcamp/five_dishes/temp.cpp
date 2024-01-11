#include<bits/stdc++.h>

typedef long long ll;

void solve(){


    std::vector<int> times(5,0);
    
    for(auto &x : times){
        std::cin >> x;
    }

    std::vector<int> diff_10 (5,0);

    int count = 0;

    for(auto &x: diff_10){
        x = 10 - times[count] % 10;
        if( x == 10)
            x = 0;
        count++;
    }

    int time = 0;
    count = 0;

    for(auto x: times){
        time = time + x + diff_10[count];
    }

    std::cout << time << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
