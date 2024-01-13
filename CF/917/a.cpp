#include<bits/stdc++.h>

typedef long long ll;


void solve(){

    int size;
    int negatives = 0, positives = 0;
    int zeros = 0;
    int count = 0;
    int abs_min = -1;
    int abs_min_index = 0;

    std::cin >> size;

    std::vector<int> nums(size);
    
    for(auto &x : nums){
        std::cin >> x;

        if(x < 0){
            negatives++;
        }
        else if( x == 0){
            zeros++;
        }
        /*
        else{
            std::cout << 0 << '\n';
            return;
        }
        */

        if(abs_min == -1){
            abs_min = std::abs(x);
            abs_min_index = count;
        }
        else if(std::abs(x) < abs_min){
            abs_min = std::abs(x);
            abs_min_index = count;
        }
        count++;
    }

    if(zeros || negatives % 2 == 1){
        std::cout << 0 << '\n';
    }
    else{
        std::cout << 1 << '\n' << abs_min_index+1 << ' ' << 0 << '\n';
    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 

int n;

std::cin >> n;

while(n--)
    solve();

return 0;
}
