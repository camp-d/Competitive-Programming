#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    ll k, one, two, three;

    std::vector<ll> nums (3);

    for(auto& x : nums)
        std::cin >> x;

    std::cin >> k;

    if(nums[0] == nums[1] && nums[1] == nums[2]){
        std::cout << 0 << '\n';
        return;
    }

    for(int i {0}; i < k; i++){
        one = nums[0];
        two = nums[1];
        three = nums[2];

        nums[0] = two + three;
        nums[1] = one + three;
        nums[2] = one + two;
    }


    if(std::abs(nums[0] - nums[1]) > 1000000000000000000)
        std::cout << "Unfair\n";
    else
        std::cout << nums[0]-nums[1] << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
