#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n;

    std::cin >> n;

    std::vector<int>nums(n);

    for(auto &x : nums){
        std::cin >> x;
    }

    std::vector<int> num2(nums);

    std::sort(nums.begin(), nums.end());

    for(int i {0}; i < (int)nums.size(); i++){
        if(num2[i] != nums.back()){
            std::cout << nums.back() << '\n';
        }
        else{
            std::cout << nums[nums.size()-2] << '\n';
        }
    }


}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
