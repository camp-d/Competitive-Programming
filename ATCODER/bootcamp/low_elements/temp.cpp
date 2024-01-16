#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned n;
    int max_found, min_found, count = 0;

    std::cin >> n;

    std::vector<int> nums(n);

    for(auto &x : nums)
        std::cin >> x;

    max_found = nums[0];
    min_found = nums[0];

    for(unsigned i {0}; i < n; i++){
        if(nums[i] <= min_found){
            count++;
        }
        max_found = std::max(max_found, nums[i]);
        min_found = std::min(min_found, nums[i]);
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
