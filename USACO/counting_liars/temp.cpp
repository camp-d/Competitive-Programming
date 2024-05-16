#include<bits/stdc++.h>

typedef long long ll;

void solve(){


    unsigned n;
    std::cin >> n;

    std::vector<std::pair<unsigned, unsigned>> cow_intervals(n);

    unsigned a;
    char c;

    for(auto &x : cow_intervals){
        std::cin >> c;
        std::cin >> a;
        // G - greater than or equal to this number : 1 in second pair
        // L - less than or equal to this number : 2 in second pair
        if(c == 'G')
            x = std::make_pair(a, 1);
        else
            x = std::make_pair(a, 2);
    }

    std::sort(cow_intervals.begin(), cow_intervals.end());

    int count;
    int max = 0;

    std::pair<unsigned,unsigned> ith_pair;
    std::pair<unsigned,unsigned> jth_pair;

    for(unsigned i = 0; i < cow_intervals.size(); i++){
        count = 0;
        ith_pair = cow_intervals.at(i);
        for(unsigned j = 0; j < cow_intervals.size(); j++){
            jth_pair = cow_intervals.at(j);
            if( j != i){
                if( (ith_pair.first < jth_pair.first && jth_pair.second == 2)
                    || (ith_pair.first > jth_pair.first && jth_pair.second == 1))
                    count++;
            }
        }
        max = std::max(max, count);
    }

    unsigned umax = (unsigned) max;

    if(umax + 1 == n)
        std::cout << '0' << '\n';
    else if(umax == 0)
        std::cout << n - 1 << '\n';
    else
        std::cout << n - umax << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
